/* Diretivas */
#include <stdio.h>

/* Função principal */
int main(void) {
    int idade;
    float altura;
    double salario;
    char inicial;

    /* Entrada */
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    /* Saída */
    printf("\n--- Dados Digitados ---\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Salário: %.2lf\n", salario);
    printf("Inicial: %c\n", inicial);

    return 0;
}
