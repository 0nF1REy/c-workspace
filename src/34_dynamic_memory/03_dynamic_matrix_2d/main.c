#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linhas, colunas;
    int **matriz;

    printf("--- MATRIZ DINÂMICA ---\n");
    printf("Linhas: ");
    scanf("%d", &linhas);
    printf("Colunas: ");
    scanf("%d", &colunas);

    // 1. Aloca as linhas (array de ponteiros)
    matriz = (int **) malloc(linhas * sizeof(int *));
    if (matriz == NULL) return 1;

    // 2. Aloca as colunas para cada linha
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) return 1;
    }

    // Preenchimento
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i + j;
        }
    }

    printf("\nMatriz Gerada (%dx%d):\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // 3. Liberação (Ordem inversa: colunas -> linhas)
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
