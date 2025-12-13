#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

// ---------------------------------------------------------
//  HELPERS
// ---------------------------------------------------------

static Token* parser_peek(Parser* parser) {
    return &parser->tokens[parser->current];
}

static Token* parser_advance(Parser* parser) {
    return &parser->tokens[parser->current++];
}

static int parser_match(Parser* parser, TokenType type) {
    if (parser_peek(parser)->type == type) {
        parser_advance(parser);
        return 1;
    }
    return 0;
}

static void parser_error(const char* msg, Token* token) {
    fprintf(stderr, "Parser error: %s (line %d)\n", msg, token->line);
    exit(1);
}

static ASTNode* ast_new(ASTNodeType type) {
    ASTNode* node = calloc(1, sizeof(ASTNode));
    node->type = type;
    return node;
}


// ---------------------------------------------------------
//  PARSER CREATION
// ---------------------------------------------------------

Parser parser_create(Token* tokens) {
    Parser p;
    p.tokens = tokens;
    p.current = 0;
    return p;
}


// ---------------------------------------------------------
//  PARSE LITERALS / IDENTIFIERS
// ---------------------------------------------------------

static ASTNode* parse_primary(Parser* parser) {
    Token* t = parser_peek(parser);

    if (t->type == TOKEN_NUMBER) {
        ASTNode* node = ast_new(AST_LITERAL_INT);
        node->literal_int = atoi(t->text);
        parser_advance(parser);
        return node;
    }

    if (t->type == TOKEN_IDENTIFIER) {
        ASTNode* node = ast_new(AST_IDENTIFIER);
        strncpy(node->identifier, t->text, sizeof(node->identifier));
        parser_advance(parser);
        return node;
    }

    parser_error("expected literal or identifier", t);
    return NULL;
}


// ---------------------------------------------------------
//  BINARY EXPRESSIONS (left-associative)
// ---------------------------------------------------------

static ASTNode* parse_binary(Parser* parser) {
    ASTNode* left = parse_primary(parser);

    while (1) {
        TokenType op = parser_peek(parser)->type;

        if (op == TOKEN_PLUS || op == TOKEN_MINUS) {
            parser_advance(parser);
            ASTNode* right = parse_primary(parser);

            ASTNode* bin = ast_new(AST_BINARY_EXPR);
            bin->binary.left = left;
            bin->binary.op = op;
            bin->binary.right = right;

            left = bin;
        } else {
            break;
        }
    }

    return left;
}


// ---------------------------------------------------------
//  DECLARATION: INTEGER :: x
// ---------------------------------------------------------

static ASTNode* parse_declaration(Parser* parser) {
    Token* t = parser_peek(parser);

    if (!parser_match(parser, TOKEN_INTEGER)) {
        parser_error("expected INTEGER", t);
    }

    if (!parser_match(parser, TOKEN_DOUBLE_COLON)) {
        parser_error("expected ::", parser_peek(parser));
    }

    if (parser_peek(parser)->type != TOKEN_IDENTIFIER) {
        parser_error("expected identifier", parser_peek(parser));
    }

    ASTNode* node = ast_new(AST_DECLARATION);
    strncpy(node->declaration.name, parser_peek(parser)->text, 64);

    parser_advance(parser);
    return node;
}


// ---------------------------------------------------------
//  ASSIGNMENT: x = expression
// ---------------------------------------------------------

static ASTNode* parse_assignment(Parser* parser) {
    Token* t = parser_peek(parser);

    if (t->type != TOKEN_IDENTIFIER)
        return NULL;

    // Lookahead: identifier must be followed by '='
    if (parser->tokens[parser->current + 1].type != TOKEN_ASSIGN)
        return NULL;

    ASTNode* node = ast_new(AST_ASSIGNMENT);

    strncpy(node->assignment.name, t->text, sizeof(node->assignment.name));

    parser_advance(parser); // consume identifier
    parser_match(parser, TOKEN_ASSIGN);

    node->assignment.value = parse_binary(parser);

    return node;
}


// ---------------------------------------------------------
//  STATEMENT
// ---------------------------------------------------------

ASTNode* parse_statement(Parser* parser) {
    Token* t = parser_peek(parser);

    if (t->type == TOKEN_INTEGER)
        return parse_declaration(parser);

    ASTNode* assign = parse_assignment(parser);
    if (assign)
        return assign;

    parser_error("expected statement", t);
    return NULL;
}


// ---------------------------------------------------------
//  PROGRAM = multiple statements
// ---------------------------------------------------------

ASTNode* parse_program(Parser* parser) {
    ASTNode* head = NULL;
    ASTNode* tail = NULL;

    while (parser_peek(parser)->type != TOKEN_EOF) {
        ASTNode* stmt = parse_statement(parser);

        if (!head) {
            head = stmt;
            tail = stmt;
        } else {
            tail->next = stmt;
            tail = stmt;
        }
    }

    return head;
}


// ---------------------------------------------------------
//  FREE AST RECURSIVELY
// ---------------------------------------------------------

void parser_free_ast(ASTNode* node) {
    if (!node) return;

    switch (node->type) {
        case AST_BINARY_EXPR:
            parser_free_ast(node->binary.left);
            parser_free_ast(node->binary.right);
            break;
        case AST_ASSIGNMENT:
            parser_free_ast(node->assignment.value);
            break;
        default:
            break;
    }

    free(node);
}
