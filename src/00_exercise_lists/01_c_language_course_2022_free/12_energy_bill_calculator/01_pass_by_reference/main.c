/*
    Sabe-se que o quilowatt de energia custa um milésimo do salário mínimo. Faça
    um procedimento que receba o valor do saláriomínimo e quantidade de quilowatts
    consumida por uma residência.
    
    O procedimento deve calcular e retornar através de passagem de parâmetros por
    referência:

        a) o valor, em reais, de cada quilowatt;
        b) o valor, em reais, a ser pago por essa residência;
        c) o valor, em reais, a ser pago com desconto de 15%.

    Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o valor do
    salário mínimo e a quantidade de quilowatts consumida. Invoque o respectivo
    procedimento e mostre, na tela, as informações dos itens a), b) e c).
*/

#include <stdio.h>

// Procedimento com Passagem por Referência
// Usamos ponteiros (*) nas variáveis que queremos "devolver" preenchidas
void calcular_conta(float sal_min, float qtd_kw, float *valor_kw, float *valor_total, float *valor_desc) {
    
    // a) Valor de 1 Kw (1/1000 do salário)
    // Usamos * para acessar o valor dentro do endereço de memória
    *valor_kw = sal_min / 1000.0;

    // b) Valor Total (Preço unitário * Quantidade)
    *valor_total = (*valor_kw) * qtd_kw;

    // c) Valor com Desconto (Total - 15%)
    // Multiplicar por 0.85 é o mesmo que tirar 15%
    *valor_desc = (*valor_total) * 0.85; 
}

int main(void) {
    float salario, consumo;
    float resultado_kw, resultado_total, resultado_com_desconto;

    printf("--- CÁLCULO DE CONTA DE LUZ ---\n");

    // 1. Entradas
    printf("Informe o Salário Mínimo: R$ ");
    scanf("%f", &salario);

    printf("Informe o consumo em kW: ");
    scanf("%f", &consumo);

    // 2. Chamada do Procedimento
    calcular_conta(salario, consumo, &resultado_kw, &resultado_total, &resultado_com_desconto);

    // 3. Saída
    printf("\n--- FATURA DETALHADA ---\n");
    printf("a) Valor unitário do kW: R$ %.2f\n", resultado_kw);
    printf("b) Valor total a pagar:  R$ %.2f\n", resultado_total);
    printf("c) Valor com desconto:   R$ %.2f\n", resultado_com_desconto);

    return 0;
}
