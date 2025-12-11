#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[20];
    char modelo[20];
    int ano;
    float preco;
};

// Construtor
struct Carro criarCarro(char *marca, char *modelo, int ano, float preco) {
    struct Carro c;

    strncpy(c.marca, marca, sizeof(c.marca) - 1);
    c.marca[sizeof(c.marca) - 1] = '\0';

    strncpy(c.modelo, modelo, sizeof(c.modelo) - 1);
    c.modelo[sizeof(c.modelo) - 1] = '\0';

    c.ano = ano;
    c.preco = preco;

    return c;
}

// Método de Visualização (Read-only via const pointer)
void exibirCarro(const struct Carro *c) {
    printf("\n--- %s %s ---\n", c->marca, c->modelo);
    printf("Ano:   %d\n", c->ano);
    printf("Preço: R$ %.2f\n", c->preco);
}

// Método de Modificação (Altera o estado via pointer)
void aplicarDesconto(struct Carro *c, float percentual) {
    float desconto = c->preco * (percentual / 100);
    c->preco -= desconto;
    printf(">> Aplicado desconto de %.0f%%.\n", percentual);
}

int main(void) {
    struct Carro meuCarro = criarCarro("Toyota", "Corolla", 2024, 150000.00);

    exibirCarro(&meuCarro);

    aplicarDesconto(&meuCarro, 10.0);

    exibirCarro(&meuCarro);

    return 0;
}
