#include <stdio.h>
#include <stdlib.h>
#include "semantic.h"
#include "symbol_table.h"

void semantic_analyze(ASTNode *program) {

    symbol_table_init();
    ASTNode *current = program;

    while (current) {
        switch (current->type) {
            case AST_DECLARATION:

                if (symbol_table_find(current->declaration.name)) {
                    fprintf(stderr, "Erro Semantico: Variavel '%s' redeclarada.\n", current->declaration.name);
                    exit(1);
                }

                symbol_table_add(current->declaration.name, SYMBOL_INTEGER);
                break;

            case AST_ASSIGNMENT:

                if (!symbol_table_find(current->assignment.name)) {
                    fprintf(stderr, "Erro Semantico: Variavel '%s' nao declarada.\n", current->assignment.name);
                    exit(1);
                }

                break;

            default:
                break;
        }
        current = current->next;
    }
}
