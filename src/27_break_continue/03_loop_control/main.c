#include <stdio.h>

int main(void) {
    printf("--- CONTROLE DE FLUXO: BREAK & CONTINUE ---\n");
    printf("Tentando contar de 1 a 20...\n");
    printf("Regras: Pular o 13 e parar se passar de 15.\n\n");

    for (int i = 1; i <= 20; i++) {
        
        // 1. USO DO CONTINUE
        // Se for 13, ignora o resto do código abaixo e volta para o 'i++'
        if (i == 13) {
            printf(">> Ops! Número 13 ignorado (Continue ativado).\n");
            continue; 
        }

        // 2. USO DO BREAK
        // Se for maior que 15, aborta a missão imediatamente.
        if (i > 15) {
            printf(">> ALERTA: Limite 15 atingido! Parando o loop (Break ativado).\n");
            break;
        }

        // Código que só roda se não tiver continue nem break antes
        printf("Processando número: %d\n", i);
    }

    printf("\n--- Fim do Programa ---\n");
    return 0;
}
