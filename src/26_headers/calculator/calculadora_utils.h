/* 
   HEADER GUARDS
   Evitam que este arquivo seja incluído duplicado, o que daria erro.
   Padrão: NOME_DO_ARQUIVO_H
*/
#ifndef CALCULADORA_UTILS_H
#define CALCULADORA_UTILS_H

// 1. Definição de Constantes (Globais para quem usar a biblioteca)
#define PI 3.14159
#define MENSAGEM_BOAS_VINDAS "--- Calculadora Modular v1.0 ---"

// 2. Protótipos das Funções (Apenas a assinatura)
int somar(int a, int b);
int subtrair(int a, int b);
float calcular_area_circulo(float raio);
void imprimir_resultado(char operacao[], float resultado);

#endif // Fim do guard
