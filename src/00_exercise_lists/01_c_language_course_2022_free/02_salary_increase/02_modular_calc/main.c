#include <stdio.h>

// Recebimento dos valores e retorno do resultado
float calcular_aumento(float salario, float taxa) {
    return salario * (taxa / 100.0);
}

int main(void) {
    float salario, taxa, aumento, total;

    printf("--- SISTEMA DE RH (MODULAR) ---\n");
    
    printf("Informe o salário: ");
    scanf("%f", &salario);

    printf("Informe a taxa de aumento (%%): ");
    scanf("%f", &taxa);

    // Chamada da função
    aumento = calcular_aumento(salario, taxa);
    total = salario + aumento;

    printf("\n[Relatório]\n");
    printf("Aumento concedido: R$ %.2f\n", aumento);
    printf("Salário ajustado:  R$ %.2f\n", total);

    return 0;
}
