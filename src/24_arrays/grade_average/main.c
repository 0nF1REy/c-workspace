#include <stdio.h>

// Boa prática: Definir o tamanho como constante
#define QTD_NOTAS 5

int main(void) {
    // DECLARAÇÃO: float notas[5];
    // O computador reserva espaço para 5 números flutuantes seguidos.
    float notas[QTD_NOTAS];
    float soma = 0.0;
    float media = 0.0;

    printf("--- SISTEMA DE NOTAS (ARRAYS) ---\n");

    // 1. PREENCHENDO O ARRAY (Escrita)
    for (int i = 0; i < QTD_NOTAS; i++) {
        // Importante: Arrays começam no índice 0
        // Por isso usamos (i + 1) apenas para mostrar ao usuário "Nota 1"
        printf("Digite a Nota %d: ", i + 1);
        scanf("%float", &notas[i]);
        
        // Podemos ir somando enquanto lemos
        soma += notas[i];
    }

    // 2. LENDO O ARRAY (Leitura)
    printf("\n--- Relatório ---\n");
    printf("Notas registradas: ");
    
    for (int i = 0; i < QTD_NOTAS; i++) {
        printf("[%.1f] ", notas[i]);
    }

    // 3. CÁLCULO FINAL
    media = soma / QTD_NOTAS;
    
    printf("\n\nMédia Final: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situação: APROVADO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }

    return 0;
}
