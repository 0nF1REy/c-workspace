#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef enum {
    SYMBOL_INTEGER,
    SYMBOL_REAL,
    SYMBOL_CHARACTER
} SymbolType;

typedef struct Symbol {
    char name[64];
    SymbolType type;
    struct Symbol *next;
} Symbol;

void symbol_table_init(void);
void symbol_table_add(const char *name, SymbolType type);
Symbol *symbol_table_find(const char *name);

#endif
