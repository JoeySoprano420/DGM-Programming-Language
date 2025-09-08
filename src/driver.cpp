#include "lexer.h"
#include "parser.h"
#include "codegen.h"
#include "runtime.h"

#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/IR/IRPrintingPasses.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Bitcode/BitcodeWriter.h"
#include "llvm/Support/FileSystem.h"

#include <fstream>
#include <iostream>

using namespace llvm;

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Usage: dgmc <file.dgm> [options]\n";
        std::cerr << "Options:\n";
        std::cerr << "  -o <outfile>    Output executable name\n";
        std::cerr << "  --emit-llvm     Emit LLVM IR (.ll)\n";
        std::cerr << "  --run           Compile and immediately run\n";
        return 1;
    }

    std::string inputFile = argv[1];
    std::string outFile = "a.out";
    bool emitLLVM = false;
    bool runAfter = false;

    for (int i = 2; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-o" && i + 1 < argc) {
            outFile = argv[++i];
        } else if (arg == "--emit-llvm") {
            emitLLVM = true;
        } else if (arg == "--run") {
            runAfter = true;
        }
    }

    // === Read source ===
    std::ifstream in(inputFile);
    if (!in.is_open()) {
        std::cerr << "Error: could not open " << inputFile << "\n";
        return 1;
    }
    std::string src((std::istreambuf_iterator<char>(in)),
                     std::istreambuf_iterator<char>());

    // === Lex + Parse ===
    Lexer lexer(src);
    Parser parser(lexer);

    std::unique_ptr<FunctionAST> fn;
    try {
        fn = parser.parseFunction();
    } catch (const std::exception &ex) {
        std::cerr << "Parse error: " << ex.what() << "\n";
        return 1;
    }

    // === Codegen ===
    CodegenContext ctx("DGMModule");
    Function *F = ctx.codegen(fn.get());
    if (!F) {
        std::cerr << "Codegen failed\n";
        return 1;
    }

    // === Emit LLVM IR ===
    if (emitLLVM) {
        std::error_code EC;
        raw_fd_ostream dest(outFile + ".ll", EC, sys::fs::OF_None);
        ctx.TheModule->print(dest, nullptr);
        dest.flush();
        std::cout << "Wrote LLVM IR to " << outFile << ".ll\n";
        return 0;
    }

    // === Target init ===
    InitializeNativeTarget();
    InitializeNativeTargetAsmPrinter();
    InitializeNativeTargetAsmParser();

    std::string errStr;
    auto targetTriple = sys::getDefaultTargetTriple();
    ctx.TheModule->setTargetTriple(targetTriple);

    const Target *target = TargetRegistry::lookupTarget(targetTriple, errStr);
    if (!target) {
        std::cerr << "Target error: " << errStr << "\n";
        return 1;
    }

    TargetOptions opt;
    auto RM = Optional<Reloc::Model>();
    std::unique_ptr<TargetMachine> TM(
        target->createTargetMachine(targetTriple, "generic", "", opt, RM));

    ctx.TheModule->setDataLayout(TM->createDataLayout());

    // === Object file emission ===
    std::error_code EC;
    raw_fd_ostream dest(outFile + ".o", EC, sys::fs::OF_None);
    if (EC) {
        std::cerr << "Could not open output file: " << EC.message() << "\n";
        return 1;
    }

    legacy::PassManager pass;
    if (TM->addPassesToEmitFile(pass, dest, nullptr, CGFT_ObjectFile)) {
        std::cerr << "Target machine cannot emit object file\n";
        return 1;
    }

    pass.run(*ctx.TheModule);
    dest.flush();

    // === Link (system call) ===
#if defined(_WIN32)
    std::string linkCmd = "clang " + outFile + ".o src/runtime.c -o " + outFile;
#else
    std::string linkCmd = "clang " + outFile + ".o src/runtime.c -lpthread -o " + outFile;
#endif
    int rc = system(linkCmd.c_str());
    if (rc != 0) {
        std::cerr << "Linking failed\n";
        return 1;
    }

    std::cout << "Built executable: " << outFile << "\n";

    if (runAfter) {
        std::cout << "Running " << outFile << "...\n";
        system(("./" + outFile).c_str());
    }

    return 0;
}
