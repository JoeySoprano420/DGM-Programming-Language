#include "parser.h"
#include <iostream>

Parser::Parser(Lexer &lex) : lexer(lex) {
    getNextToken();
}

void Parser::getNextToken() {
    current = lexer.nextToken();
}

bool Parser::expect(TokenType type, const std::string &msg) {
    if (current.type != type) {
        throw std::runtime_error("Parse error: expected " + msg + " at line " +
                                 std::to_string(current.line));
    }
    return true;
}

std::unique_ptr<ExprAST> Parser::parseNumberExpr() {
    auto result = std::make_unique<NumberExprAST>(std::stoi(current.text));
    getNextToken();
    return std::move(result);
}

std::unique_ptr<ExprAST> Parser::parseStringExpr() {
    auto result = std::make_unique<StringExprAST>(current.text);
    getNextToken();
    return std::move(result);
}

std::unique_ptr<ExprAST> Parser::parseIdentifierExpr() {
    std::string id = current.text;
    getNextToken();

    // Call expression
    if (current.type == TOK_UNKNOWN && current.text == "(") {
        return parseCallExpr(id);
    }

    return std::make_unique<VariableExprAST>(id);
}

std::unique_ptr<ExprAST> Parser::parseCallExpr(std::string callee) {
    getNextToken(); // consume '('
    std::vector<std::unique_ptr<ExprAST>> args;

    if (current.type != TOK_UNKNOWN || current.text != ")") {
        while (true) {
            args.push_back(parseExpression());

            if (current.text == ")") break;
            if (current.text != ",")
                throw std::runtime_error("Expected ',' or ')' in arguments");
            getNextToken();
        }
    }

    getNextToken(); // consume ')'
    return std::make_unique<CallExprAST>(callee, std::move(args));
}

std::unique_ptr<ExprAST> Parser::parsePrimary() {
    switch (current.type) {
    case TOK_IDENTIFIER:
        return parseIdentifierExpr();
    case TOK_NUMBER:
        return parseNumberExpr();
    case TOK_STRING:
        return parseStringExpr();
    case TOK_SAFE_ADD:
    case TOK_SAFE_SUB:
    case TOK_SAFE_MUL:
    case TOK_SAFE_DIV: {
        std::string op = current.text;
        getNextToken();
        auto lhs = parseExpression();
        auto rhs = parseExpression();
        return std::make_unique<BinaryExprAST>(op, std::move(lhs), std::move(rhs));
    }
    default:
        throw std::runtime_error("Unknown token in expression: " + current.text);
    }
}

std::unique_ptr<ExprAST> Parser::parseExpression() {
    return parsePrimary();
}

std::unique_ptr<FunctionAST> Parser::parseFunction() {
    expect(TOK_FUNC, "func");
    getNextToken();

    expect(TOK_IDENTIFIER, "function name");
    std::string name = current.text;
    getNextToken();

    expect(TOK_START, "start");
    getNextToken();

    std::vector<std::unique_ptr<ExprAST>> body;
    while (current.type != TOK_END && current.type != TOK_EOF) {
        body.push_back(parseExpression());
    }

    expect(TOK_END, "end");
    getNextToken();

    return std::make_unique<FunctionAST>(name, std::move(body));
}
