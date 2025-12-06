#include <stdio.h>
#include <string.h>

struct Usuario {
    char nome[50];
    char bio[100];
};

int main(void) {
    struct Usuario user;

    printf("--- CADASTRO DE USUÁRIO ---\n\n");

    // 1. Input Nome
    printf("Digite seu nome completo: ");
    fgets(user.nome, sizeof(user.nome), stdin);
    
    // Remove o \n final
    user.nome[strcspn(user.nome, "\n")] = '\0';

    // 2. Input Bio
    printf("Digite uma breve bio: ");
    fgets(user.bio, sizeof(user.bio), stdin);

    // Remove o \n final
    user.bio[strcspn(user.bio, "\n")] = '\0';

    // Relatório
    printf("\n--- DADOS REGISTRADOS ---\n");
    printf("Nome: [%s]\n", user.nome);
    printf("Bio:  [%s]\n", user.bio);

    return 0;
}
