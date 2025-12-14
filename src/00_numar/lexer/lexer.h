#ifndef LEXER_H
#define LEXER_H

#include "../include/numar.h"

typedef struct {
    const char *source;
    int pos;
    int line;
    int column;
} Lexer;

void lexer_init(Lexer *lexer, const char *source);
Token lexer_next_token(Lexer *lexer);

#endif
