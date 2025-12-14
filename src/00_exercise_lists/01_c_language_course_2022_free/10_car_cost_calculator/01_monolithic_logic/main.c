/*
    O custo de um carro novo ao consumidor final é o preço de fábrica somado ao percentual
    de lucro do distribuidor, acrescido dos impostos aplicados ao preço de fábrica. Faça um
    programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor
    e o percentual de impostos.
    
    Em cada item, crie uma função distinta para calcular e retornar:

        a) o valor correspondente ao lucro do distribuidor;
        b) o valor correspondente aos impostos;
        c) o preço final do veículo.

    Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada
    uma das funções, mostrando o lucro do distribuidor, os impostos e o valor final do
    veículo.
*/

#include <stdio.h>

int main(void) {
    float preco_fabrica, pct_lucro, pct_impostos;
    float valor_lucro, valor_imposto, preco_final;

    printf("--- CÁLCULO DE CUSTO DE CARRO (MONOLÍTICO) ---\n");

    // 1. Entradas
    printf("Preço de Fábrica: R$ ");
    scanf("%f", &preco_fabrica);

    printf("Percentual do Distribuidor (%%): ");
    scanf("%f", &pct_lucro);

    printf("Percentual de Impostos (%%): ");
    scanf("%f", &pct_impostos);

    // 2. Cálculos
    valor_lucro = preco_fabrica * (pct_lucro / 100.0);
    valor_imposto = preco_fabrica * (pct_impostos / 100.0);
    
    preco_final = preco_fabrica + valor_lucro + valor_imposto;

    // 3. Saída
    printf("\n--- RESULTADOS ---\n");
    printf("Lucro do Distribuidor: R$ %.2f\n", valor_lucro);
    printf("Valor dos Impostos:    R$ %.2f\n", valor_imposto);
    printf("Preço Final:           R$ %.2f\n", preco_final);

    return 0;
}
