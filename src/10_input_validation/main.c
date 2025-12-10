#include <stdio.h>

int main(void) {
    int n = 999;

    printf("Digite um número: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada inválida! Valor de n continua sendo: %d\n", n);
        return 1;
    }

    printf("Você digitou: %d\n", n);
}
