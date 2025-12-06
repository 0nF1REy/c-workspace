#include <stdio.h>

#define QTD_NOTAS 5

int main(void) {
    
    float notas[QTD_NOTAS];
    float soma = 0.0;
    float media;

    printf("--- SISTEMA DE NOTAS ---\n");

    // Entrada de dados
    for (int i = 0; i < QTD_NOTAS; i++) {
        printf("Digite a Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Exibição do relatório
    printf("\nNotas registradas: ");
    for (int i = 0; i < QTD_NOTAS; i++) {
        printf("[%.1f] ", notas[i]);
    }

    // Cálculo e Resultado
    media = soma / QTD_NOTAS;
    
    printf("\n\nMédia Final: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situação: APROVADO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }

    return 0;
}
