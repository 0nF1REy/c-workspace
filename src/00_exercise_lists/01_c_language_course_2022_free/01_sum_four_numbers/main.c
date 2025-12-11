#include <stdio.h>

int main(void) {
    
    int n1, n2, n3, n4, soma;

    printf("Insira o primeiro número: ");
    scanf("%d", &n1);

    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    printf("Insira o terceiro número: ");
    scanf("%d", &n3);

    printf("Insira o quarto número: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("Resultado da soma: %d\n", soma);

    return 0;
}
