#ifndef NUMAR_H
#define NUMAR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// --------------------------------------
// ENUM: Tokens da linguagem NUMAR
// --------------------------------------
typedef enum {
    // Palavras-chave
    TOKEN_TYPE,
    TOKEN_CONTAINS,
    TOKEN_PROCEDURE,
    TOKEN_PROGRAM,
    TOKEN_END,
    TOKEN_CLASS,
    TOKEN_INTEGER,
    TOKEN_CHARACTER,
    TOKEN_REAL,
    TOKEN_CALL,
    TOKEN_PRINT,

    // Identificadores e literais
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_STRING,

    // Símbolos
    TOKEN_COLON,
    TOKEN_DOUBLE_COLON,
    TOKEN_PERCENT,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_COMMA,
    TOKEN_ASSIGN,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_STAR,
    TOKEN_SLASH,

    // Especiais
    TOKEN_NEWLINE,
    TOKEN_EOF,
    TOKEN_UNKNOWN
} TokenType;


// Estrutura básica do token
typedef struct {
    TokenType type;
    char text[128];
    int line;
    int column;
} Token;

#endif
