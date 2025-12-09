#include "poligonos.h"

// Definindo PI manualmente para garantir compilação
#define PI 3.14159

float calcPerimetroTriangulo(float a, float b, float c){
    return a + b + c;
}

float calcPerimetroRetangulo(float b, float a){
    return 2*b + 2*a;
}

float calcPerimetroCirculo(float r){
    return 2 * PI * r;
}
