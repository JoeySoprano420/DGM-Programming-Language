#ifndef DGM_LEXER_H
#define DGM_LEXER_H

#include <string>
#include <vector>
#include <cctype>
#include <unordered_map>

// Token types
enum TokenType {
    TOK_EOF = 0,
    TOK_IDENTIFIER,
    TOK_NUMBER,
    TOK_STRING,
    TOK_FUNC,
    TOK_START,
    TOK_END,
    TOK_CALL,
    TOK_SAFE_ADD,
    TOK_SAFE_SUB,
    TOK_SAFE_MUL,
    TOK_SAFE_DIV,
    TOK_TUPLE_PACK,
    TOK_TUPLE_UNPACK,
    TOK_LIST_APPEND,
    TOK_LIST_REMOVE,
    TOK_PARALLEL,
    TOK_SYNC,
    TOK_UNKNOWN
};

struct Token {
    TokenType type;
    std::string text;
    int line;
    int col;
};

class Lexer {
public:
    Lexer(const std::string &src);
    Token nextToken();

private:
    std::string source;
    size_t pos;
    int line;
    int col;

    char peek() const;
    char get();
    void skipWhitespace();
    Token identifier();
    Token number();
    Token string();
};

#endif
