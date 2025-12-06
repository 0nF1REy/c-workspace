#include <stdio.h>
#include "safe_math.h" // Importa nossa biblioteca segura

int main(void) {
    printf("--- SISTEMA DE CÁLCULO SEGURO (MODULAR) ---\n\n");

    // Caso 1: Array Normal
    float notas[] = {10.0, 8.5, 9.0};
    // O sizeof calcula o tamanho em bytes, dividimos pelo tamanho de um item
    // para saber quantos itens tem. É uma forma dinâmica de pegar o tamanho.
    int qtd = sizeof(notas) / sizeof(notas[0]);
    
    float media = calcular_media(notas, qtd);
    printf("Caso 1 (Normal): Média = %.2f\n", media);

    // Caso 2: Array Vazio (Simulando erro de lógica)
    printf("\nCaso 2 (Tamanho Zero): ");
    calcular_media(notas, 0);

    // Caso 3: Ponteiro Nulo (Simulando falha de alocação)
    printf("\nCaso 3 (Ponteiro NULL): ");
    calcular_media(NULL, 10);

    return 0;
}
