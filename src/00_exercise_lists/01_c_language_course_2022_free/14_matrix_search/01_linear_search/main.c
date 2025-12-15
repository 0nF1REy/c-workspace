/*
    Desenvolva um algoritmo que preencha uma matriz numérico de dimensões 3x3. Após
    preencher todo a matriz, o usuário deve inserir uma chave de busca X. Caso exista algum
    número igual a X, dentro da matriz, o algoritmo deve mostrar, na tela, os índices da linha
    e da coluna da posição na qual na qual X foi encontrado pela primeira vez. Caso
    contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não
    encontrada.".
*/

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
