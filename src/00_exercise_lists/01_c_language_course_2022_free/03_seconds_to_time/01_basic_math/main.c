#include <stdio.h>

int main(void) {
    int total_segundos, horas, minutos, segundos;

    printf("--- CONVERSOR DE TEMPO ---\n");
    printf("Digite o tempo em segundos: ");
    scanf("%d", &total_segundos);

    // 1 hora tem 3600 segundos (60 * 60)
    horas = total_segundos / 3600;
    
    // O resto da divisão acima é o que sobrou para calcular minutos
    int resto = total_segundos % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    // %02d garante que o número tenha sempre 2 dígitos (ex: 05 em vez de 5)
    printf("\nTempo convertido: %02dh:%02dm:%02ds\n", horas, minutos, segundos);

    return 0;
}
