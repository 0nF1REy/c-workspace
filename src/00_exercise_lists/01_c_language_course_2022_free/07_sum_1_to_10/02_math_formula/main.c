#include <stdio.h>

int main(void) {
    int n = 10;
    
    // Fórmula da Soma de Gauss: S = (n * (1 + n)) / 2
    int soma = (n * (1 + n)) / 2;

    printf("--- SOMATÓRIO (GAUSS) ---\n");
    printf("Cálculo direto para 1 até %d:\n", n);
    printf("Resultado: %d\n", soma);

    return 0;
}
