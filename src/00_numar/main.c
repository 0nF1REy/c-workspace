#include <stdio.h>
#include <stdlib.h>

#include "lexer/lexer.h"
#include "parser/parser.h"
#include "semantic/semantic.h"

// -------------------------------------------------
// Lê um arquivo inteiro para memória
// -------------------------------------------------
static char *read_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Erro ao abrir arquivo");
        exit(1);
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    char *buffer = malloc(size + 1);
    if (!buffer) {
        perror("Erro de memória");
        exit(1);
    }

    fread(buffer, 1, size, file);
    buffer[size] = '\0';

    fclose(file);
    return buffer;
}

int main(int argc, char **argv) {

    if (argc < 2) {
        printf("Uso: numar <arquivo.n>\n");
        return 1;
    }

    // -----------------------------------
    // Lê código-fonte .n
    // -----------------------------------
    char *source = read_file(argv[1]);

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

    printf("✔ Lexer OK (%d tokens)\n", token_count);

    // -----------------------------------
    // PARSER
    // -----------------------------------
    Parser parser = parser_create(tokens);
    ASTNode *ast = parse_program(&parser);

    printf("✔ Parser OK\n");

    // -----------------------------------
    // SEMANTIC
    // -----------------------------------
    semantic_analyze(ast);

    printf("✔ Semantic OK\n");
    printf("✔ Numar pipeline finalizado\n");

    free(source);
    return 0;
}
