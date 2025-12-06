#include <stdio.h>

// Protótipos das funções

void bubble_sort(int vetor[], int tamanho);
void imprimir_vetor(int vetor[], int tamanho);

int main(void) {
    
    // Vetor desordenado
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    
    // Calcula o tamanho automaticamente:
    // (tamanho total em bytes) / (tamanho de 1 inteiro)
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("--- ALGORITMO BUBBLE SORT ---\n\n");
    
    printf("Estado Original: ");
    imprimir_vetor(numeros, n);
    printf("\n");

    // Chama a função de ordenação
    bubble_sort(numeros, n);

    printf("\nEstado Final (Ordenado): ");
    imprimir_vetor(numeros, n);
    printf("\n");

    return 0;
}

// --- Implementação ---

void bubble_sort(int vetor[], int tamanho) {
    int aux; // Variável auxiliar para a troca (swap)

    // O loop externo (i) representa quantas passadas faremos
    for (int i = 0; i < tamanho - 1; i++) {
        
        // a cada passada, o maior número já está no final, não precisamos checar de novo.
        for (int j = 0; j < tamanho - i - 1; j++) {
            
            // SE o atual for MAIOR que o próximo, troca!
            if (vetor[j] > vetor[j + 1]) {
                
                // Lógica de Troca (Swap)
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
        
        // Visualização do processo a cada passada
        printf("Passada %d: ", i + 1);
        imprimir_vetor(vetor, tamanho);
    }
}

void imprimir_vetor(int vetor[], int tamanho) {
    printf("[ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");
}
