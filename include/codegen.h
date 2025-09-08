#ifndef DGM_CODEGEN_H
#define DGM_CODEGEN_H

#include "ast.h"
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"

class CodegenContext {
public:
    llvm::LLVMContext TheContext;
    std::unique_ptr<llvm::Module> TheModule;
    llvm::IRBuilder<> Builder;
    std::map<std::string, llvm::Value*> NamedValues;

    CodegenContext(const std::string &moduleName);

    llvm::Value *logError(const char *msg);

    // AST node lowering
    llvm::Value *codegen(ExprAST *expr);
    llvm::Function *codegen(FunctionAST *func);

    // Helpers
    void annotate(llvm::Instruction *I, int opcode);
};

#endif
