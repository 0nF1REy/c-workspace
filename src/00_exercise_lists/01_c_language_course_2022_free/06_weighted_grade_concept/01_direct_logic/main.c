#include <stdio.h>

int main(void) {
    float n_lab, n_sem, n_exame, media;
    char conceito;

    printf("--- SISTEMA DE NOTAS E CONCEITOS ---\n");

    // 1. Entrada de Dados
    printf("Nota do Trabalho de Laboratório (Peso 2): ");
    scanf("%f", &n_lab);

    printf("Nota da Avaliação Semestral (Peso 3): ");
    scanf("%f", &n_sem);

    printf("Nota do Exame Final (Peso 5): ");
    scanf("%f", &n_exame);

    // 2. Processamento (Média Ponderada)
    // Fórmula: (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3)
    media = (n_lab * 2 + n_sem * 3 + n_exame * 5) / 10.0;

    // 3. Definição do conceito (Escada If/Else)
    if (media >= 8.0) {
        conceito = 'A';
    } else if (media >= 7.0) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 5.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // 4. Saída
    printf("\n--- RESULTADO FINAL ---\n");
    printf("Média Ponderada: %.2f\n", media);
    printf("Conceito Final:  %c\n", conceito);

    return 0;
}
