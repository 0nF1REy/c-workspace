#include <stdio.h>

int main(void) {
    printf("--- MATRIZ FIXA 3x3 (Teclado) ---\n\n");

    int teclado[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Visualizando a matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", teclado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
