#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número: ");

    // Verifica se a leitura foi bem-sucedida
    if (scanf("%d", &numero) != 1) {
        printf("Entrada inválida! Por favor, digite um número inteiro.\n");
        return 1;  // encerra o programa com erro
    }

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
