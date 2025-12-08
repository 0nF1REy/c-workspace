#include <stdio.h>

// Definição de struct com typedef
typedef struct {
    char nome[50];
    int idade;
} Tipo_Pessoa;

int main(void) {

    // Inicialização de uma variável do tipo Tipo_Pessoa
    Tipo_Pessoa pessoa = {"Sarah Calliope Atenaidas", 21};

    // Exibição dos dados
    printf("--- EXEMPLO DE STRUCT COM TYPEDEF ---\n\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);

    return 0;
}
