#ifndef SAFE_MATH_H
#define SAFE_MATH_H

// Calcula a média de um array de floats com proteção contra NULL e tamanho zero.
// Retorna 0.0 em caso de erro.
float calcular_media(const float* numeros, int tamanho);

#endif
