#include <stdio.h>
#include "calculadora_utils.h"

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

float calcular_area_circulo(float raio) {
    return PI * (raio * raio);
}

void imprimir_resultado(char operacao[], float resultado) {
    printf(">> Resultado da %s: %.2f\n", operacao, resultado);
}
