/*
    Faça um programa que receba o número de horas trabalhadas por um gestor
    e o valor do salário mínimo vigente.
    
    Crie uma função que calcule o salário a receber do gestor, seguindo as
    regras abaixo:

        I - a hora trabalhada vale a metade do salário mínimo;
        II - o salário bruto equivale ao número de horas trabalhadas multiplicado
        pelo valor da hora trabalhada;
        III - o imposto equivale a 3% do salário bruto;
        IV - o salário a receber equivale ao salário bruto menos o imposto.

    Crie um algoritmo que invoque a respectiva função e mostre o salário a receber.
*/

#include <stdio.h>

float calcular_salario_receber(float horas_trabalhadas, float salario_minimo) {
    float valor_hora = salario_minimo / 2.0;
    float salario_bruto = horas_trabalhadas * valor_hora;
    float imposto = salario_bruto * 0.03;

    return salario_bruto - imposto;
}

int main(void) {
    float horas, minimo_vigente, salario_final;

    printf("--- CÁLCULO SALARIAL DE GESTOR ---\n");

    // 1. Coleta de Dados
    printf("Informe o valor do Salário Mínimo: R$ ");
    scanf("%f", &minimo_vigente);

    printf("Informe o número de horas trabalhadas: ");
    scanf("%f", &horas);

    // 2. Processamento
    salario_final = calcular_salario_receber(horas, minimo_vigente);

    // 3. Saída
    printf("\n--- RESULTADO ---\n");
    printf("Salário a receber: R$ %.2f\n", salario_final);

    return 0;
}
