#include <stdio.h>

int main(void) {
    printf("--- INTRODUÇÃO ÀS MATRIZES (2D ARRAYS) ---\n\n");

    // ====================================================
    // EXEMPLO 1: INICIALIZAÇÃO FIXA (Já sabendo os valores)
    // ====================================================
    // Imagine um teclado numérico de telefone:
    // 1 2 3
    // 4 5 6
    // 7 8 9
    
    // Sintaxe: int nome[LINHAS][COLUNAS]
    int teclado[3][3] = {
        {1, 2, 3},  // Linha 0
        {4, 5, 6},  // Linha 1
        {7, 8, 9}   // Linha 2
    };

    printf(">>> Exemplo 1: Matriz Fixa (Teclado)\n");
    
    // Para percorrer uma matriz, precisamos de DOIS loops:
    // O 'i' percorre as LINHAS (desce)
    // O 'j' percorre as COLUNAS (vai para o lado)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d] ", teclado[i][j]);
        }
        printf("\n"); // Pula de linha ao fim de cada linha da matriz
    }

    printf("\n----------------------------------------\n\n");

    // ====================================================
    // EXEMPLO 2: DECLARAÇÃO E INPUT (Preenchimento manual)
    // ====================================================
    // Vamos criar uma matriz 2x2 (Pequena para ser rápido de digitar)
    int matriz_usuario[2][2];

    printf(">>> Exemplo 2: Digite valores para uma Matriz 2x2\n");

    // Loop de Preenchimento
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor para Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz_usuario[i][j]);
        }
    }

    printf("\nVisualizando sua matriz:\n");

    // Loop de Exibição
    for (int i = 0; i < 2; i++) {
        printf("| "); // Estética (borda esquerda)
        for (int j = 0; j < 2; j++) {
            // %3d reserva 3 espaços para alinhar os números bonitinho
            printf("%3d ", matriz_usuario[i][j]);
        }
        printf("|\n"); // Estética (borda direita e quebra de linha)
    }

    return 0;
}
