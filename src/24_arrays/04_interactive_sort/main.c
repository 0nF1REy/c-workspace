#include <stdio.h>

#define QTD_NUMEROS 10

// Protótipos das funções
void bubble_sort_crescente(int vetor[], int tamanho);
void imprimir_vetor(int vetor[], int tamanho);

int main(void) {
    int numeros[QTD_NUMEROS];

    printf("--- ORDENADOR DE NÚMEROS ---\n");
    printf("Por favor, digite %d números inteiros.\n", QTD_NUMEROS);
    printf("Pressione ENTER após cada número.\n\n");

    // 1. ENTRADA DE DADOS (Loop para preencher)
    for (int i = 0; i < QTD_NUMEROS; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n----------------------------------------\n");

    // 2. MOSTRAR ESTADO ORIGINAL
    printf("Ordem inserida (Original):\n");
    imprimir_vetor(numeros, QTD_NUMEROS);

    // 3. PROCESSAMENTO (Ordenar)
    bubble_sort_crescente(numeros, QTD_NUMEROS);

    // 4. MOSTRAR RESULTADO
    printf("\nOrdem Classificada (Crescente):\n");
    imprimir_vetor(numeros, QTD_NUMEROS);
    printf("----------------------------------------\n");

    return 0;
}

// --- Implementação das Funções ---

// Algoritmo Bubble Sort (O mesmo do exemplo anterior, limpo)
void bubble_sort_crescente(int vetor[], int tamanho) {
    int aux;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            // Se o atual for MAIOR que o próximo, troca (para ficar crescente)
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

// Função auxiliar para imprimir bonito
void imprimir_vetor(int vetor[], int tamanho) {
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        // Imprime o número
        printf("%d", vetor[i]);
        
        // Se não for o último número, coloca uma vírgula para separar
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
}
