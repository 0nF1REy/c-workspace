#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, soma;

    printf("Digite quatro números inteiros:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    soma = n1 + n2 + n3 + n4;

    printf("Soma: %d\n", soma);

    return 0;
}
