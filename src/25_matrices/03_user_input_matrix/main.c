#include <stdio.h>

int main(void) {
    printf("--- MATRIZ 2x2 COM INPUT DO USUÁRIO ---\n\n");

    int matriz[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor para Linha %d, Coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nVisualizando sua matriz:\n");
    for (int i = 0; i < 2; i++) {
        printf("| ");
        for (int j = 0; j < 2; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
