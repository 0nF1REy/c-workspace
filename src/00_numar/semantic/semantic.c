#include <stdio.h>
#include <stdlib.h>
#include "semantic.h"
#include "symbol_table.h"

void semantic_analyze(ASTNode *program) {
    ASTNode *current = program;

    while (current) {
        switch (current->type) {

            case AST_DECLARATION:
                break;

            case AST_ASSIGNMENT:
                break;

            default:
                break;
        }

        current = current->next;
    }
}
