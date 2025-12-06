#include <stdio.h>

int main(void) {
    // INICIALIZAÇÃO DIRETA
    // O compilador conta os itens e cria um array de tamanho 8 automaticamente.
    int numeros[] = {45, 12, 89, 3, 67, 102, 8, 55};
    
    // Calcula o tamanho do array dinamicamente
    // sizeof(numeros) = tamanho total em bytes
    // sizeof(numeros[0]) = tamanho de um item (int)
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    // Algoritmo de Busca:
    // Assumimos que o primeiro número é o maior E o menor inicialmente.
    int maior = numeros[0];
    int menor = numeros[0];

    printf("--- ANALISADOR DE NÚMEROS ---\n");
    printf("Lista: ");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);

        // Verifica Maior
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        // Verifica Menor
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\n\n--------------------------\n");
    printf("Total de itens: %d\n", tamanho);
    printf("Maior valor encontrado: %d\n", maior);
    printf("Menor valor encontrado: %d\n", menor);
    printf("--------------------------\n");

    return 0;
}
