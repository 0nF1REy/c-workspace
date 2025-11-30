#include <stdio.h>

void saudacao(void) {
    printf("Olá! Bem-vindo ao programa de funções em C.\n");
}

int somar(int a, int b) {
    return a + b;
}

int main(void) {

    saudacao();

    int resultado = somar(5, 7);

    printf("A soma de 5 e 7 é: %d\n", resultado);

    return 0;
}
