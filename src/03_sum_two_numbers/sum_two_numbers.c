#include <stdio.h>

int main(void) {
    int num1, num2, resultado;

    /* Entrada */
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    /* Processamento */
    resultado = num1 + num2;

    /* Saída */
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
