#include "codegen.h"
#include <iostream>

using namespace llvm;

CodegenContext::CodegenContext(const std::string &moduleName)
    : TheModule(std::make_unique<Module>(moduleName, TheContext)),
      Builder(TheContext) {}

Value *CodegenContext::logError(const char *msg) {
    std::cerr << "Error: " << msg << "\n";
    return nullptr;
}

// Attach DGM metadata (base-12 opcode annotation)
void CodegenContext::annotate(Instruction *I, int opcode) {
    MDNode *N = MDNode::get(TheContext,
        MDString::get(TheContext, "DGM:" + std::to_string(opcode)));
    I->setMetadata("dgm.opcode", N);
}

// === ExprAST Lowering ===

Value *CodegenContext::codegen(ExprAST *expr) {
    if (auto *N = dynamic_cast<NumberExprAST*>(expr)) {
        return ConstantInt::get(Type::getInt32Ty(TheContext), N->getValue());
    }
    if (auto *S = dynamic_cast<StringExprAST*>(expr)) {
        return Builder.CreateGlobalStringPtr(S->getValue());
    }
    if (auto *V = dynamic_cast<VariableExprAST*>(expr)) {
        if (NamedValues.count(V->getName()))
            return NamedValues[V->getName()];
        return logError(("Unknown variable " + V->getName()).c_str());
    }
    if (auto *B = dynamic_cast<BinaryExprAST*>(expr)) {
        Value *L = codegen(B->getLHS());
        Value *R = codegen(B->getRHS());
        if (!L || !R) return nullptr;

        Instruction *I = nullptr;
        if (B->getOp() == "safe.add") {
            I = dyn_cast<Instruction>(Builder.CreateAdd(L, R, "addtmp"));
            annotate(I, 0x50); // DGM opcode 50 = safe.add
        } else if (B->getOp() == "safe.sub") {
            I = dyn_cast<Instruction>(Builder.CreateSub(L, R, "subtmp"));
            annotate(I, 0x51);
        } else if (B->getOp() == "safe.mul") {
            I = dyn_cast<Instruction>(Builder.CreateMul(L, R, "multmp"));
            annotate(I, 0x52);
        } else if (B->getOp() == "safe.div") {
            I = dyn_cast<Instruction>(Builder.CreateSDiv(L, R, "divtmp"));
            annotate(I, 0x53);
        } else {
            return logError(("Unknown binary op: " + B->getOp()).c_str());
        }
        return I;
    }
    if (auto *C = dynamic_cast<CallExprAST*>(expr)) {
        Function *CalleeF = TheModule->getFunction(C->getCallee());
        if (!CalleeF) {
            // Declare as extern if missing
            std::vector<Type*> Args(C->getArgs().size(), Type::getInt32Ty(TheContext));
            FunctionType *FT = FunctionType::get(Type::getInt32Ty(TheContext), Args, false);
            CalleeF = Function::Create(FT, Function::ExternalLinkage, C->getCallee(), TheModule.get());
        }

        std::vector<Value*> ArgsV;
        for (auto &arg : C->getArgs()) {
            ArgsV.push_back(codegen(arg.get()));
        }
        Instruction *I = Builder.CreateCall(CalleeF, ArgsV, "calltmp");
        annotate(I, 0x2b); // DGM opcode 2b = call
        return I;
    }
    return logError("Unknown expression type");
}

// === FunctionAST Lowering ===

Function *CodegenContext::codegen(FunctionAST *func) {
    std::vector<Type*> Args;
    FunctionType *FT = FunctionType::get(Type::getInt32Ty(TheContext), Args, false);
    Function *F = Function::Create(FT, Function::ExternalLinkage, func->getName(), TheModule.get());

    BasicBlock *BB = BasicBlock::Create(TheContext, "entry", F);
    Builder.SetInsertPoint(BB);

    for (auto &stmt : func->getBody()) {
        codegen(stmt.get());
    }

    Builder.CreateRet(ConstantInt::get(Type::getInt32Ty(TheContext), 0));

    if (verifyFunction(*F, &errs())) {
        logError("Function verification failed");
        F->eraseFromParent();
        return nullptr;
    }

    return F;
}
