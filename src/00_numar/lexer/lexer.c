#include "lexer.h"

// -----------------------------------------------
// Função: inicializa o lexer
// -----------------------------------------------
void lexer_init(Lexer *lexer, const char *source) {
    lexer->source = source;
    lexer->pos = 0;
    lexer->line = 1;
    lexer->column = 1;
}


// -----------------------------------------------
// Função auxiliar: retorna o caractere atual
// -----------------------------------------------
static char current_char(Lexer *lexer) {
    return lexer->source[lexer->pos];
}


// -----------------------------------------------
// Avança um caractere
// -----------------------------------------------
static void advance(Lexer *lexer) {
    if (current_char(lexer) == '\n') {
        lexer->line++;
        lexer->column = 1;
    } else {
        lexer->column++;
    }
    lexer->pos++;
}


// -----------------------------------------------
// Identifica palavras-chave
// -----------------------------------------------
TokenType lexer_keyword_type(const char *text) {

    if (strcmp(text, "TYPE") == 0) return TOKEN_TYPE;
    if (strcmp(text, "CONTAINS") == 0) return TOKEN_CONTAINS;
    if (strcmp(text, "PROCEDURE") == 0) return TOKEN_PROCEDURE;
    if (strcmp(text, "PROGRAM") == 0) return TOKEN_PROGRAM;
    if (strcmp(text, "END") == 0) return TOKEN_END;
    if (strcmp(text, "INTEGER") == 0) return TOKEN_INTEGER;
    if (strcmp(text, "REAL") == 0) return TOKEN_REAL;
    if (strcmp(text, "CHARACTER") == 0) return TOKEN_CHARACTER;
    if (strcmp(text, "CALL") == 0) return TOKEN_CALL;
    if (strcmp(text, "PRINT") == 0) return TOKEN_PRINT;

    return TOKEN_IDENTIFIER;
}


// -----------------------------------------------
// Lê o próximo token (versão mínima)
// -----------------------------------------------
Token lexer_next_token(Lexer *lexer) {
    Token token;
    token.line = lexer->line;
    token.column = lexer->column;
    token.text[0] = '\0';

    char c = current_char(lexer);

    // Fim do arquivo
    if (c == '\0') {
        token.type = TOKEN_EOF;
        return token;
    }

    // Quebra de linha
    if (c == '\n') {
        token.type = TOKEN_NEWLINE;
        strcpy(token.text, "\\n");
        advance(lexer);
        return token;
    }

    // Por enquanto, tudo desconhecido
    token.type = TOKEN_UNKNOWN;
    token.text[0] = c;
    token.text[1] = '\0';
    advance(lexer);
    return token;
}
