#include <stdio.h>

int main(void) {
    // Declaração das três notas e da média
    float n1, n2, n3, media;

    // Entrada da primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    // Entrada da segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    // Entrada da terceira nota
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    // Cálculo da média
    media = (n1 + n2 + n3) / 3;

    // Exibe a média formatada
    printf("\nMédia: %.2f\n", media);

    // Verifica se o aluno está aprovado ou reprovado
    if (media >= 6.0) {
        printf("Status: APROVADO\n");
    } else {
        printf("Status: REPROVADO\n");
    }

    return 0;
}
