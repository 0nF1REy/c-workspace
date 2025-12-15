#include <stdio.h>

#define DIM 3

int buscar_valor(int matriz[DIM][DIM], int chave, int *linha_out, int *coluna_out) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (matriz[i][j] == chave) {
                *linha_out = i;
                *coluna_out = j;
                return 1;
            }
        }
    }
    return 0;
}

int main(void) {
    int matriz[DIM][DIM];
    int chave;
    int pos_linha, pos_coluna;

    printf("--- BUSCA EM MATRIZ 3x3 ---\n");

    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite a chave de busca: ");
    scanf("%d", &chave);

    if (buscar_valor(matriz, chave, &pos_linha, &pos_coluna)) {
        printf("\nEncontrado na Linha: %d | Coluna: %d\n", pos_linha, pos_coluna);
    } else {
        printf("\nChave não encontrada.\n");
    }

    return 0;
}
