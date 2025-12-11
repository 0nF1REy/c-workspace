#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tamanho;
    int *vetor;

    printf("--- ARRAY DINÂMICO ---\n");
    printf("Quantos números deseja armazenar? ");
    scanf("%d", &tamanho);

    // Aloca memória dinamicamente na Heap com base no input
    vetor = (int *) malloc(tamanho * sizeof(int));

    // Verifica se a alocação falhou (memória cheia)
    if (vetor == NULL) {
        fprintf(stderr, "[ERRO] Memória insuficiente.\n");
        return 1;
    }

    // Usa o ponteiro como se fosse um array normal
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (i + 1) * 10;
    }

    printf("\nExibindo vetor:\n[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");

    // Libera a memória alocada (evita Memory Leak)
    free(vetor);

    return 0;
}
