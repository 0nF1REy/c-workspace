#include <stdio.h>

int main(void) {

    int numeros[4];
    int soma = 0;

    // Loop para Entrada
    for (int i = 0; i < 4; i++) {
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Resultado da soma: %d\n", soma);
    return 0;
}
