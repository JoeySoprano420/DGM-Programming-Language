#include "ast.h"

static void doIndent(int indent) {
    for (int i = 0; i < indent; ++i) std::cerr << "  ";
}

void NumberExprAST::dump(int indent) const {
    doIndent(indent);
    std::cerr << "NumberExpr: " << Val << "\n";
}

void StringExprAST::dump(int indent) const {
    doIndent(indent);
    std::cerr << "StringExpr: \"" << Val << "\"\n";
}

void VariableExprAST::dump(int indent) const {
    doIndent(indent);
    std::cerr << "VariableExpr: " << Name << "\n";
}

void BinaryExprAST::dump(int indent) const {
    doIndent(indent);
    std::cerr << "BinaryExpr: " << Op << "\n";
    if (LHS) LHS->dump(indent + 1);
    if (RHS) RHS->dump(indent + 1);
}

void CallExprAST::dump(int indent) const {
    doIndent(indent);
    std::cerr << "CallExpr: " << Callee << "\n";
    for (auto &arg : Args) {
        arg->dump(indent + 1);
    }
}

void FunctionAST::dump(int indent) const {
    doIndent(indent);
    std::cerr << "Function: " << Name << "\n";
    for (auto &stmt : Body) {
        stmt->dump(indent + 1);
    }
}
