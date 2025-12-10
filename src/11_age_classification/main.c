#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");

    // Validação de entrada
    if (scanf("%d", &idade) != 1) {
        printf("Entrada inválida! Por favor, digite um número inteiro.\n");
        return 1; // encerra o programa
    }

    // Verificação de idade negativa
    if (idade < 0) {
        printf("Idade inválida! A idade não pode ser negativa.\n");
        return 1;
    }

    // Classificação
    if (idade <= 12) {
        printf("Criança\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else if (idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}
