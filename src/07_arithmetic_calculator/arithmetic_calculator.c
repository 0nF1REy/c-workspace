/* Diretivas */
#include <stdio.h>

/* Função principal */
int main(void) {
    int n1, n2;

    /* Entrada */
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    /* Processamento */
    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int multiplicacao = n1 * n2;
    double divisao_real = (double)n1 / n2;  // Cast para divisão real
    int resto = n1 % n2;

    /* Saída */
    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão real: %.2lf\n", divisao_real);
    printf("Resto da divisão: %d\n", resto);

    return 0;
}
