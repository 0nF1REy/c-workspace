#include <stdio.h>

int main(void) {
    float salario_atual, percentual, valor_aumento, novo_salario;

    printf("--- CÁLCULO DE AUMENTO SALARIAL ---\n");

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de aumento (ex: 10 para 10%%): ");
    scanf("%f", &percentual);

    // Regra de três simples: (Salário * Porcentagem) / 100
    valor_aumento = salario_atual * (percentual / 100.0);
    novo_salario = salario_atual + valor_aumento;

    printf("\n--- RESULTADO ---\n");
    printf("Salário Inicial:  R$ %.2f\n", salario_atual);
    printf("Percentual:       %.2f%%\n", percentual);
    printf("Valor do Aumento: R$ %.2f\n", valor_aumento);
    printf("Novo Salário:     R$ %.2f\n", novo_salario);

    return 0;
}
