#ifndef NUMAR_LEXER_H
#define NUMAR_LEXER_H

#include "../include/numar.h"

// ------------------------------------------------------------
// Estrutura principal do Lexer
// ------------------------------------------------------------
typedef struct {
    const char *source;   // código-fonte inteiro
    size_t pos;           // posição atual na string
    int line;             // linha atual
    int column;           // coluna atual
} Lexer;


// ------------------------------------------------------------
// Funções públicas do Lexer
// ------------------------------------------------------------

// Inicializa o lexer com o código fonte
void lexer_init(Lexer *lexer, const char *source);

// Lê o próximo token
Token lexer_next_token(Lexer *lexer);

// Função auxiliar: verifica palavra-chave
TokenType lexer_keyword_type(const char *text);


#endif
