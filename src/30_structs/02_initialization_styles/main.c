#include <stdio.h>

struct Produto {
    int id;
    char nome[50];
    float preco;
    int estoque;
};

int main(void) {
    printf("--- ESTILOS DE INICIALIZAÇÃO ---\n\n");

    // 1. Inicialização Posicional (Clássica)
    struct Produto p1 = { 101, "Maçã", 2.50, 100 };

    // 2. Inicialização Designada (Moderna/Recomendada)
    struct Produto p2 = {
        .nome = "Banana",
        .preco = 1.99,
        .estoque = 50,
        .id = 102
    };

    // 3. Inicialização Parcial (Campos omitidos tornam-se 0)
    struct Produto p3 = {
        .nome = "Produto Fantasma",
        .id = 999
    };

    printf("Posicional: %d - %s (R$ %.2f)\n", p1.id, p1.nome, p1.preco);
    printf("Designado:  %d - %s (R$ %.2f)\n", p2.id, p2.nome, p2.preco);
    printf("Parcial:    %d - %s (R$ %.2f) Estoque: %d\n", p3.id, p3.nome, p3.preco, p3.estoque);

    return 0;
}
