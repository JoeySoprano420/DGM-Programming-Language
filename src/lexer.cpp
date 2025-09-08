#include "lexer.h"
#include <stdexcept>

Lexer::Lexer(const std::string &src)
    : source(src), pos(0), line(1), col(1) {}

char Lexer::peek() const {
    if (pos >= source.size()) return '\0';
    return source[pos];
}

char Lexer::get() {
    if (pos >= source.size()) return '\0';
    char c = source[pos++];
    if (c == '\n') { line++; col = 1; }
    else { col++; }
    return c;
}

void Lexer::skipWhitespace() {
    while (isspace(peek())) get();
}

Token Lexer::identifier() {
    int startCol = col;
    std::string result;
    while (isalnum(peek()) || peek() == '.' || peek() == '_') {
        result += get();
    }

    // Keywords → token types
    static std::unordered_map<std::string, TokenType> keywords = {
        {"func", TOK_FUNC},
        {"start", TOK_START},
        {"end", TOK_END},
        {"call", TOK_CALL},
        {"safe.add", TOK_SAFE_ADD},
        {"safe.sub", TOK_SAFE_SUB},
        {"safe.mul", TOK_SAFE_MUL},
        {"safe.div", TOK_SAFE_DIV},
        {"tuple.pack", TOK_TUPLE_PACK},
        {"tuple.unpack", TOK_TUPLE_UNPACK},
        {"list.append", TOK_LIST_APPEND},
        {"list.remove", TOK_LIST_REMOVE},
        {"language.parallel", TOK_PARALLEL},
        {"language.sync", TOK_SYNC}
    };

    auto it = keywords.find(result);
    if (it != keywords.end()) {
        return {it->second, result, line, startCol};
    }

    return {TOK_IDENTIFIER, result, line, startCol};
}

Token Lexer::number() {
    int startCol = col;
    std::string result;
    while (isdigit(peek())) {
        result += get();
    }
    return {TOK_NUMBER, result, line, startCol};
}

Token Lexer::string() {
    int startCol = col;
    std::string result;
    get(); // skip opening quote
    while (peek() != '"' && peek() != '\0') {
        result += get();
    }
    if (peek() == '"') get(); // closing quote
    return {TOK_STRING, result, line, startCol};
}

Token Lexer::nextToken() {
    skipWhitespace();
    int startCol = col;
    char c = peek();
    if (c == '\0') return {TOK_EOF, "", line, col};

    if (isalpha(c)) return identifier();
    if (isdigit(c)) return number();
    if (c == '"') return string();

    get(); // consume char
    return {TOK_UNKNOWN, std::string(1, c), line, startCol};
}
