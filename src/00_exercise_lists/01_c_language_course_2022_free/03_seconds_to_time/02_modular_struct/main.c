#include <stdio.h>

// Definindo um novo tipo de dado para agrupar o horário
typedef struct {
    int h;
    int m;
    int s;
} Tempo;

// Recebimento de segundos brutos e retorno da Struct formatada
Tempo converter_segundos(int total_segundos) {
    Tempo t;
    
    t.h = total_segundos / 3600;
    int resto = total_segundos % 3600;
    
    t.m = resto / 60;
    t.s = resto % 60;
    
    return t;
}

int main(void) {
    int segundos_input;

    printf("--- RELÓGIO DA SARAH (MODULAR) ---\n");
    printf("Segundos cronometrados: ");
    scanf("%d", &segundos_input);

    // Recebe a struct já pronta
    Tempo resultado = converter_segundos(segundos_input);

    printf("\n[Resultado Final]\n");
    printf("%dh %dm %ds\n", resultado.h, resultado.m, resultado.s);

    return 0;
}
