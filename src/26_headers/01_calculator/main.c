#include <stdio.h>
#include "calculadora_utils.h"

int main(void) {
    printf("%s\n\n", MENSAGEM_BOAS_VINDAS);

    int n1 = 10;
    int n2 = 5;
    float raio = 3.0;

    int res_soma = somar(n1, n2);
    int res_sub = subtrair(n1, n2);
    float res_area = calcular_area_circulo(raio);

    imprimir_resultado("Soma", (float)res_soma);
    imprimir_resultado("Subtração", (float)res_sub);
    imprimir_resultado("Área do Círculo", res_area);

    printf("\nValor de PI utilizado: %f\n", PI);

    return 0;
}
