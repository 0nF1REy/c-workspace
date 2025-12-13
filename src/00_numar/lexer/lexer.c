#include "lexer.h"
#include <ctype.h>
#include <string.h>

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
    if (strcmp(text, "INTEGER") == 0) return TOKEN_INTEGER;
    if (strcmp(text, "REAL") == 0) return TOKEN_REAL;
    if (strcmp(text, "CHARACTER") == 0) return TOKEN_CHARACTER;
    if (strcmp(text, "PROGRAM") == 0) return TOKEN_PROGRAM;
    if (strcmp(text, "CALL") == 0) return TOKEN_CALL;
    if (strcmp(text, "PRINT") == 0) return TOKEN_PRINT;
    return TOKEN_IDENTIFIER; // Qualquer palavra não reconhecida é um identificador
}


// -----------------------------------------------
// Função para reconhecer números inteiros
// -----------------------------------------------
static Token lexer_number(Lexer *lexer) {
    Token token;
    token.line = lexer->line;
    token.column = lexer->column;
    token.type = TOKEN_NUMBER;

    int length = 0;
    while (isdigit(current_char(lexer))) {
        token.text[length++] = current_char(lexer);
        advance(lexer);
    }

    token.text[length] = '\0';  // Finaliza a string do número
    return token;
}


// -----------------------------------------------
// Função para reconhecer identificadores (variáveis)
// -----------------------------------------------
static Token lexer_identifier(Lexer *lexer) {
    Token token;
    token.line = lexer->line;
    token.column = lexer->column;
    token.type = TOKEN_IDENTIFIER;

    int length = 0;
    while (isalnum(current_char(lexer)) || current_char(lexer) == '_') {
        token.text[length++] = current_char(lexer);
        advance(lexer);
    }

    token.text[length] = '\0';  // Finaliza a string do identificador
    return token;
}


// -----------------------------------------------
// Função para reconhecer operadores
// -----------------------------------------------
static Token lexer_operator(Lexer *lexer) {
    Token token;
    token.line = lexer->line;
    token.column = lexer->column;

    char c = current_char(lexer);
    if (c == '=') {
        token.type = TOKEN_ASSIGN;
        token.text[0] = '=';
        token.text[1] = '\0';
        advance(lexer);
    } else if (c == '+') {
        token.type = TOKEN_PLUS;
        token.text[0] = '+';
        token.text[1] = '\0';
        advance(lexer);
    } else if (c == '-') {
        token.type = TOKEN_MINUS;
        token.text[0] = '-';
        token.text[1] = '\0';
        advance(lexer);
    } else if (c == ':') {
        advance(lexer);
        if (current_char(lexer) == ':') {
            token.type = TOKEN_DOUBLE_COLON;
            token.text[0] = ':';
            token.text[1] = ':';
            token.text[2] = '\0';
            advance(lexer);
        }
    }

    return token;
}


// -----------------------------------------------
// Função principal de lexing
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

    // Ignora espaços e quebras de linha
    if (isspace(c)) {
        advance(lexer);
        return lexer_next_token(lexer);  // Chama recursivamente para ignorar múltiplos espaços
    }

    // Reconhece números
    if (isdigit(c)) {
        return lexer_number(lexer);
    }

    // Reconhece identificadores
    if (isalpha(c) || c == '_') {
        return lexer_identifier(lexer);
    }

    // Reconhece operadores
    if (c == '=' || c == '+' || c == '-' || c == ':') {
        return lexer_operator(lexer);
    }

    // Para caracteres desconhecidos
    token.type = TOKEN_UNKNOWN;
    token.text[0] = c;
    token.text[1] = '\0';
    advance(lexer);
    return token;
}
