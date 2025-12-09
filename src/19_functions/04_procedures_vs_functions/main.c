#include <stdio.h>

// Procedimentos (Void: Apenas executa uma ação)
void mostrarMensagem() {
    printf("Bem-vindo ao programa!\n");
}

void linha() {
    printf("-------------------------\n");
}

void mostrarDobro(int n) {
    printf("O dobro de %d é %d\n", n, n * 2);
}

// Funções (Int: Retorna um valor para quem chamou)
int soma(int a, int b) {
    return a + b;
}

int quadrado(int x) {
    return x * x;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    mostrarMensagem();
    linha();

    mostrarDobro(7);
    linha();

    int x = 5, y = 12;

    printf("Soma = %d\n", soma(x, y));
    printf("Quadrado = %d\n", quadrado(x));
    printf("Maior = %d\n", maior(x, y));

    linha();
    return 0;
}
