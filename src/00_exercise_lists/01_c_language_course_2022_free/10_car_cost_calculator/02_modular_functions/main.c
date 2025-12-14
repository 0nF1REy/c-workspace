#include <stdio.h>

float calcular_lucro_distribuidor(float preco_fabrica, float percentual) {
    return preco_fabrica * (percentual / 100.0);
}

float calcular_impostos(float preco_fabrica, float percentual) {
    return preco_fabrica * (percentual / 100.0);
}

float calcular_preco_final(float fabrica, float lucro, float impostos) {
    return fabrica + lucro + impostos;
}

int main(void) {
    float p_fabrica, pct_lucro, pct_imposto;
    float v_lucro, v_imposto, v_final;

    printf("--- SISTEMA DE PRECIFICAÇÃO DE VEÍCULOS ---\n");

    // 1. Coleta de Dados
    printf("Informe o preço de fábrica: R$ ");
    scanf("%f", &p_fabrica);

    printf("Informe % lucro distribuidor: ");
    scanf("%f", &pct_lucro);

    printf("Informe % de impostos: ");
    scanf("%f", &pct_imposto);

    // 2. Processamento
    v_lucro   = calcular_lucro_distribuidor(p_fabrica, pct_lucro);
    v_imposto = calcular_impostos(p_fabrica, pct_imposto);
    
    // Passamos os resultados das anteriores para a final
    v_final   = calcular_preco_final(p_fabrica, v_lucro, v_imposto);

    // 3. Relatório Final
    printf("\n--- DETALHAMENTO DE CUSTOS ---\n");
    printf("Preço Base:          R$ %.2f\n", p_fabrica);
    printf("(+) Lucro Distrib.:  R$ %.2f\n", v_lucro);
    printf("(+) Impostos:        R$ %.2f\n", v_imposto);
    printf("-----------------------------\n");
    printf("(=) PREÇO AO CONSUMIDOR: R$ %.2f\n", v_final);

    return 0;
}
