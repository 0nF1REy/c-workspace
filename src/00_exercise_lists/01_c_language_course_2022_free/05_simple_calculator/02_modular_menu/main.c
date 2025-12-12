#include <stdio.h>

void exibir_menu(void) {
    printf("\n=== OPERAÇÕES ===\n");
    printf("[1] Adição\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("=================\n");
}

int main(void) {
    int a, b, op;

    printf("--- CALCULADORA MODULAR ---\n");
    printf("Insira o 1º valor: ");
    scanf("%d", &a);
    printf("Insira o 2º valor: ");
    scanf("%d", &b);

    exibir_menu();
    printf("Sua escolha: ");
    scanf("%d", &op);

    printf("\n>> Resultado: ");

    switch (op) {
        case 1:
            printf("%d\n", a + b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("%.2f\n", (float)a / b);
            } else {
                printf("[ERRO] Divisão por zero detectada.\n");
            }
            break;
        default:
            printf("[ERRO] Operação desconhecida.\n");
    }

    return 0;
}
