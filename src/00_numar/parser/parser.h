#ifndef NUMAR_PARSER_H
#define NUMAR_PARSER_H

#include <stddef.h>
#include "../lexer/lexer.h"

// ---------------------------------------------------------
//  AST NODE TYPES
// ---------------------------------------------------------

typedef enum {
    AST_PROGRAM,
    AST_DECLARATION,
    AST_ASSIGNMENT,
    AST_BINARY_EXPR,
    AST_LITERAL_INT,
    AST_IDENTIFIER
} ASTNodeType;

// ---------------------------------------------------------
//  AST STRUCTURE
// ---------------------------------------------------------

typedef struct ASTNode {
    ASTNodeType type;

    union {
        // INTEGER :: x
        struct {
            char name[64];
        } declaration;

        // x = expression
        struct {
            char name[64];
            struct ASTNode* value;
        } assignment;

        // 5 + 3
        struct {
            struct ASTNode* left;
            TokenType op;        // TOKEN_PLUS, TOKEN_MINUS, etc.
            struct ASTNode* right;
        } binary;

        // Literal number (INTEGER)
        int literal_int;

        // Identifier
        char identifier[64];
    };

    struct ASTNode* next;  // Para listas, blocos, sequências
} ASTNode;


// ---------------------------------------------------------
//  PARSER STRUCTURE
// ---------------------------------------------------------

typedef struct {
    Token* tokens;
    size_t current;
} Parser;


// ---------------------------------------------------------
//  PUBLIC API (funções que o parser expõe)
// ---------------------------------------------------------

Parser parser_create(Token* tokens);

ASTNode* parse_program(Parser* parser);
ASTNode* parse_statement(Parser* parser);
ASTNode* parse_expression(Parser* parser);

void parser_free_ast(ASTNode* node);

#endif
