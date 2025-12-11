#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("--- MALLOC: STACK VS HEAP ---\n\n");

    // 1. Alocação na Stack
    char hello[] = "Hello World!";
    printf("Endereço Stack: %p\n", (void*)&hello);

    // 2. Alocação na Heap
    char *hello2 = malloc(sizeof(hello));

    // Guard Clause para falha de alocação
    if (hello2 == NULL) {
        fprintf(stderr, "[ERRO] Falha ao alocar memória.\n");
        return 1;
    }

    strcpy(hello2, hello);
    printf("Endereço Heap:  %p\n", (void*)hello2);

    // 3. Aritmética de Ponteiros (Deslocamento)
    char *hello3 = hello2 + 6;

    printf("\n--- RESULTADOS ---\n");
    printf("Original:  [%s]\n", hello2);
    printf("Deslocado: [%s]\n", hello3);

    // Limpeza de memória
    free(hello2);

    return 0;
}
