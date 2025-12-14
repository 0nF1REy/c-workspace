#include <stdio.h>
#include <stdlib.h>

#include "lexer/lexer.h"
#include "parser/parser.h"
#include "semantic/semantic.h"

int main(void) {

    // -----------------------------------
    // Código fonte de teste (Numar)
    // -----------------------------------
    const char *source =
        "INTEGER :: x\n"
        "x = 5 + 3\n";

    // -----------------------------------
    // LEXER
    // -----------------------------------
    Lexer lexer;
    lexer_init(&lexer, source);

    Token tokens[256];
    int token_count = 0;

    do {
        tokens[token_count] = lexer_next_token(&lexer);
    } while (tokens[token_count++].type != TOKEN_EOF);

    printf("✔ Lexer finished (%d tokens)\n", token_count);

    // -----------------------------------
    // PARSER
    // -----------------------------------
    Parser parser = parser_create(tokens);
    ASTNode *ast = parse_program(&parser);

    printf("✔ Parser finished (AST created)\n");

    // -----------------------------------
    // SEMANTIC
    // -----------------------------------
    semantic_analyze(ast);

    printf("✔ Semantic analysis finished\n");

    printf("\n✔ Numar compilation pipeline executed successfully\n");

    return 0;
}
