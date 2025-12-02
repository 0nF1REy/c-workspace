#include <stdio.h>
#include "calculadora_utils.h" // Inclui nosso próprio header

// Implementação da Soma
int somar(int a, int b) {
    return a + b;
}

// Implementação da Subtração
int subtrair(int a, int b) {
    return a - b;
}

// Implementação da Área (Usa a constante PI do header)
float calcular_area_circulo(float raio) {
    return PI * (raio * raio);
}

// Implementação da Função de Impressão
void imprimir_resultado(char operacao[], float resultado) {
    printf(">> Resultado da %s: %.2f\n", operacao, resultado);
}
