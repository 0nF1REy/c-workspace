#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

static Symbol *symbol_table = NULL;

void symbol_table_init(void) {
    symbol_table = NULL;
}

void symbol_table_add(const char *name, SymbolType type) {
    Symbol *sym = malloc(sizeof(Symbol));
    strncpy(sym->name, name, sizeof(sym->name));
    sym->type = type;
    sym->next = symbol_table;
    symbol_table = sym;
}

Symbol *symbol_table_find(const char *name) {
    Symbol *current = symbol_table;
    while (current) {
        if (strcmp(current->name, name) == 0)
            return current;
        current = current->next;
    }
    return NULL;
}
