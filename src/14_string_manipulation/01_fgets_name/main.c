#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o \n que o fgets adiciona
    nome[strcspn(nome, "\n")] = '\0';

    printf("Olá, %s! Seu nome tem %zu caracteres.\n", nome, strlen(nome));

    return 0;
}
