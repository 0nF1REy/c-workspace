#include <stdio.h>
#include "poligonos.h"

int main(void) {
    float a = 3, b = 4, c = 5;
    float ladoA = 10, ladoB = 20;
    float raio = 7;

    printf("Perímetro do triângulo: %.2f\n", 
           calcPerimetroTriangulo(a, b, c));

    printf("Perímetro do retângulo: %.2f\n", 
           calcPerimetroRetangulo(ladoA, ladoB));

    printf("Perímetro do círculo: %.2f\n", 
           calcPerimetroCirculo(raio));

    return 0;
}
