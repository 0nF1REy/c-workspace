#include <stdio.h>

void imprimir_uma_tabuada(int numero) {
    printf("\n>>> Tabuada do %d <<<\n", numero);
    
    for (int i = 1; i <= 10; i++) {
        // %2d reserva 2 espaços para alinhar (ex: " 9" e "10")
        // %3d reserva 3 espaços para o resultado
        printf("%2d x %2d = %3d\n", numero, i, numero * i);
    }
}

int main(void) {
    printf("--- SISTEMA DE TABUADAS ---\n");

    for (int i = 1; i <= 10; i++) {
        imprimir_uma_tabuada(i);
    }

    return 0;
}
