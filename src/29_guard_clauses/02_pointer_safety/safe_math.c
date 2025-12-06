#include <stdio.h>
#include "safe_math.h"

float calcular_media(const float* numeros, int tamanho) {
    
    // GUARD CLAUSE 1: Proteção contra Ponteiro Nulo (NULL)
    // Evita o temido Segmentation Fault
    if (numeros == NULL) {
        printf("[ERRO CRÍTICO] O array não foi inicializado (NULL).\n");
        return 0.0;
    }

    // GUARD CLAUSE 2: Proteção contra Divisão por Zero
    if (tamanho <= 0) {
        printf("[ERRO] O tamanho do array deve ser maior que zero.\n");
        return 0.0;
    }

    // --- LÓGICA SEGURA ---
    // Se passou pelos guardas, o terreno está limpo.
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    return soma / tamanho;
}
