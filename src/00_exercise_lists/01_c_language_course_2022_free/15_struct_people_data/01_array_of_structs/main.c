/*
    Faça um programa que seja capaz de armazenar os dados de três pessoas: nome, idade,
    peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome e a idade da
    primeira pessoa e o peso e altura da última pessoa.
*/

#include <stdio.h>
#include <string.h>

#define QTD 3

typedef struct {
    char nome[50];
    int idade;
    float peso;
    float altura;
} Pessoa;

void limpar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    Pessoa pessoas[QTD];

    printf("--- CADASTRO DE PESSOAS ---\n");

    for (int i = 0; i < QTD; i++) {
        printf("\n[Pessoa %d]\n", i + 1);

        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Peso (kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("Altura (m): ");
        scanf("%f", &pessoas[i].altura);

        limpar_buffer();
    }

    printf("\n--- RESULTADOS ---\n");

    printf("1ª Pessoa - Nome:  %s\n", pessoas[0].nome);
    printf("1ª Pessoa - Idade: %d anos\n", pessoas[0].idade);

    int ultimo = QTD - 1;
    printf("Última Pessoa - Peso:   %.2f kg\n", pessoas[ultimo].peso);
    printf("Última Pessoa - Altura: %.2f m\n", pessoas[ultimo].altura);

    return 0;
}
