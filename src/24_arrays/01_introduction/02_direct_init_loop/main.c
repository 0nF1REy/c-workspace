#include <stdio.h>

int main(void) {

    int v[5] = {50, 40, 30, 20, 10};
    float soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += v[i];
    }

    float media = soma / 5;

    printf("Média calculada: %.2f\n", media);

    return 0;
}
