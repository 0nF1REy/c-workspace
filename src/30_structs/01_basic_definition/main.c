#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
    float preco;
};

int main(void) {
    printf("--- ESTRUTURAS: DEFINIÇÃO E ATRIBUIÇÃO ---\n\n");

    struct Livro meu_livro;

    // Atribuição de valores primitivos
    meu_livro.ano_publicacao = 1949;
    meu_livro.preco = 35.90;

    // Atribuição de strings (requer strcpy em C)
    strcpy(meu_livro.titulo, "1984");
    strcpy(meu_livro.autor, "George Orwell");

    // Exibição dos dados
    printf("Dados do Livro:\n");
    printf("Título:  %s\n", meu_livro.titulo);
    printf("Autor:   %s\n", meu_livro.autor);
    printf("Ano:     %d\n", meu_livro.ano_publicacao);
    printf("Preço:   R$ %.2f\n", meu_livro.preco);

    printf("\n[Info] Tamanho da struct: %lu bytes\n", sizeof(meu_livro));

    return 0;
}
