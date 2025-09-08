#ifndef DGM_AST_H
#define DGM_AST_H

#include <string>
#include <vector>
#include <memory>
#include <iostream>

// Base class for all expression nodes
class ExprAST {
public:
    virtual ~ExprAST() = default;
    virtual void dump(int indent = 0) const = 0;
};

// Expression class for numeric literals
class NumberExprAST : public ExprAST {
    int Val;
public:
    NumberExprAST(int val) : Val(val) {}
    void dump(int indent = 0) const override;
    int getValue() const { return Val; }
};

// Expression class for string literals
class StringExprAST : public ExprAST {
    std::string Val;
public:
    StringExprAST(const std::string &val) : Val(val) {}
    void dump(int indent = 0) const override;
    const std::string &getValue() const { return Val; }
};

// Expression class for referencing a variable
class VariableExprAST : public ExprAST {
    std::string Name;
public:
    VariableExprAST(const std::string &name) : Name(name) {}
    void dump(int indent = 0) const override;
    const std::string &getName() const { return Name; }
};

// Expression class for a binary operator
class BinaryExprAST : public ExprAST {
    std::string Op;
    std::unique_ptr<ExprAST> LHS, RHS;
public:
    BinaryExprAST(const std::string &op, std::unique_ptr<ExprAST> lhs,
                  std::unique_ptr<ExprAST> rhs)
        : Op(op), LHS(std::move(lhs)), RHS(std::move(rhs)) {}
    void dump(int indent = 0) const override;
    const std::string &getOp() const { return Op; }
    ExprAST *getLHS() const { return LHS.get(); }
    ExprAST *getRHS() const { return RHS.get(); }
};

// Expression class for function calls
class CallExprAST : public ExprAST {
    std::string Callee;
    std::vector<std::unique_ptr<ExprAST>> Args;
public:
    CallExprAST(const std::string &callee,
                std::vector<std::unique_ptr<ExprAST>> args)
        : Callee(callee), Args(std::move(args)) {}
    void dump(int indent = 0) const override;
    const std::string &getCallee() const { return Callee; }
    const std::vector<std::unique_ptr<ExprAST>> &getArgs() const { return Args; }
};

// Function definition
class FunctionAST {
    std::string Name;
    std::vector<std::unique_ptr<ExprAST>> Body;
public:
    FunctionAST(const std::string &name, std::vector<std::unique_ptr<ExprAST>> body)
        : Name(name), Body(std::move(body)) {}
    void dump(int indent = 0) const;
    const std::string &getName() const { return Name; }
    const std::vector<std::unique_ptr<ExprAST>> &getBody() const { return Body; }
};

#endif
