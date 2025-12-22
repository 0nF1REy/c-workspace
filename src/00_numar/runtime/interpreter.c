#include <stdio.h>
#include <string.h>
#include "../parser/parser.h"

// Simulação de memória RAM para as variáveis (simples para este estágio)
typedef struct {
    char name[64];
    int value;
} Variable;

Variable memory[100];
int mem_count = 0;

// Função para buscar valor na memória
int get_var(const char* name) {
    for(int i=0; i<mem_count; i++) {
        if(strcmp(memory[i].name, name) == 0) return memory[i].value;
    }
    return 0; // Ou erro
}

// Função para setar valor na memória
void set_var(const char* name, int val) {
    for(int i=0; i<mem_count; i++) {
        if(strcmp(memory[i].name, name) == 0) {
            memory[i].value = val;
            return;
        }
    }
    // Nova variável
    strcpy(memory[mem_count].name, name);
    memory[mem_count].value = val;
    mem_count++;
}

// Avalia expressões (5 + 3, x + 1, etc)
int eval_expr(ASTNode* node) {
    if (!node) return 0;

    if (node->type == AST_LITERAL_INT) {
        return node->literal_int;
    }
    
    if (node->type == AST_IDENTIFIER) {
        return get_var(node->identifier);
    }

    if (node->type == AST_BINARY_EXPR) {
        int left = eval_expr(node->binary.left);
        int right = eval_expr(node->binary.right);

        if (node->binary.op == TOKEN_PLUS) return left + right;
        if (node->binary.op == TOKEN_MINUS) return left - right;
        if (node->binary.op == TOKEN_STAR) return left * right;
        if (node->binary.op == TOKEN_SLASH) return left / right; // Cuidado com divisão por zero
    }
    return 0;
}

// Executa o programa
void runtime_execute(ASTNode* program) {
    ASTNode* current = program;
    while (current) {
        if (current->type == AST_ASSIGNMENT) {
            int val = eval_expr(current->assignment.value);
            set_var(current->assignment.name, val);
            printf("RUNTIME: %s = %d\n", current->assignment.name, val);
        }
        
        current = current->next;
    }
}
