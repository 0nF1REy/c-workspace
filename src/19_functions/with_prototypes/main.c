#include <stdio.h>

// Protótipos das funções
void saudacao(void);
int somar(int a, int b);

int main(void) {

    saudacao();

    int resultado = somar(5, 7);

    printf("A soma de 5 e 7 é: %d\n", resultado);
    
    return 0;
}

// Implementação das funções
void saudacao(void) {
    printf("Olá! Bem-vindo ao programa de funções em C.\n");
}

int somar(int a, int b) {
    return a + b;
}
