#include <stdio.h>

int main(void) {
    int n1, n2, opcao;

    printf("--- CALCULADORA SIMPLES ---\n\n");

    printf("Escolha a operação:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opção Inválida! Reinicie o programa.\n");
        return 1;
    }

    printf("\nAgora, digite dois números inteiros (ex: 10 2): ");
    scanf("%d %d", &n1, &n2);

    printf("Resultado: ");

    switch (opcao) {
        case 1:
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case 2:
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case 3:
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case 4:
            if (n2 == 0) {
                printf("Erro: Divisão por zero.\n");
            } else {
                printf("%d / %d = %.2f\n", n1, n2, (float)n1 / n2);
            }
            break;
    }

    return 0;
}
