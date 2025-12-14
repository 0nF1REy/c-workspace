#include <stdio.h>

#define QTD 8

int main(void) {
    int fib[QTD];

    printf("--- FIBONACCI (ARRAY) ---\n");

    // Inicialização manual dos dois primeiros
    fib[0] = 0;
    fib[1] = 1;

    // Preenchimento automático a partir do 3º item (índice 2)
    for (int i = 2; i < QTD; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Exibição do Vetor
    printf("Sequência: ");
    for (int i = 0; i < QTD; i++) {
        printf("[%d] ", fib[i]);
    }
    printf("\n");

    return 0;
}
