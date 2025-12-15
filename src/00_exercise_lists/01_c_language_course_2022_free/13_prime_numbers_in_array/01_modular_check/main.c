#include <stdio.h>

#define TAMANHO 9

// Recebe um número e diz se é primo (1) ou não (0)
int verificar_primo(int n) {
    if (n <= 1) return 0;

    // Verifica divisores de 2 até a metade do número
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int numeros[TAMANHO];
    int encontrou_primo = 0;

    printf("--- BUSCADOR DE NÚMEROS PRIMOS ---\n");

    // 1. Carregamento do Vetor
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // 2. Análise e Saída
    printf("\n--- RELATÓRIO DE PRIMOS ---\n");
    
    for (int i = 0; i < TAMANHO; i++) {
        if (verificar_primo(numeros[i])) {
            printf("Número Primo: %d | Posição (Índice): %d\n", numeros[i], i);
            encontrou_primo = 1;
        }
    }

    if (!encontrou_primo) {
        printf("Nenhum número primo foi inserido.\n");
    }

    return 0;
}
