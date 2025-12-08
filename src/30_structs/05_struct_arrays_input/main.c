#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 3
#define DIAS_SEMANA 7

typedef struct {
    char nome[50];
    float preco;
    int vendas[DIAS_SEMANA];  // Quantidade vendida em cada dia da semana
} Produto;

int main(void) {
    Produto estoque[MAX_PRODUTOS];

    printf("--- CADASTRO DE PRODUTOS ---\n\n");

    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);

        // Lendo o nome
        printf("Nome: ");
        fgets(estoque[i].nome, sizeof(estoque[i].nome), stdin);
        estoque[i].nome[strcspn(estoque[i].nome, "\n")] = 0;

        // Lendo o preço
        printf("Preço: R$ ");
        scanf("%f", &estoque[i].preco);

        // Lendo as vendas da semana
        for (int j = 0; j < DIAS_SEMANA; j++) {
            printf("Vendas do dia %d: ", j + 1);
            scanf("%d", &estoque[i].vendas[j]);
        }

        // Limpar buffer do stdin
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("\n");
    }

    // Exibindo os dados
    printf("--- RELATÓRIO DE VENDAS ---\n\n");
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto: %s\n", estoque[i].nome);
        printf("Preço: R$ %.2f\n", estoque[i].preco);
        printf("Vendas da semana: ");
        for (int j = 0; j < DIAS_SEMANA; j++) {
            printf("%d ", estoque[i].vendas[j]);
        }
        printf("\n\n");
    }

    return 0;
}
