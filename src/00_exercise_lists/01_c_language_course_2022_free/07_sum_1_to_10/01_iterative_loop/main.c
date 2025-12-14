#include <stdio.h>

int main(void) {
    int soma = 0;

    printf("--- SOMATÓRIO (LOOP) ---\n");

    for (int i = 1; i <= 10; i++) {
        soma += i;
        printf("%d ", i);
        if (i < 10) printf("+ ");
    }

    printf("\n\nResultado da soma: %d\n", soma);

    return 0;
}
