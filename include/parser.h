#ifndef DGM_PARSER_H
#define DGM_PARSER_H

#include "lexer.h"
#include "ast.h"
#include <memory>
#include <vector>
#include <stdexcept>

class Parser {
public:
    Parser(Lexer &lexer);

    std::unique_ptr<FunctionAST> parseFunction();
    std::unique_ptr<ExprAST> parseExpression();
    std::unique_ptr<ExprAST> parsePrimary();
    std::unique_ptr<ExprAST> parseIdentifierExpr();
    std::unique_ptr<ExprAST> parseNumberExpr();
    std::unique_ptr<ExprAST> parseStringExpr();
    std::unique_ptr<ExprAST> parseCallExpr(std::string callee);

private:
    Lexer &lexer;
    Token current;

    void getNextToken();
    bool expect(TokenType type, const std::string &msg);
};

#endif
