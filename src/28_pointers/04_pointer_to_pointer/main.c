#include <stdio.h>

int main(void) {
    int a = 40;
    int *pont1 = &a;
    int **pont2 = &pont1;

    printf("--- PONTEIRO PARA PONTEIRO (DOUBLE POINTER) ---\n\n");

    // 1. Endereços Físicos
    printf("Endereço de 'a':     %p\n", &a);
    printf("Endereço de 'pont1': %p\n", &pont1);

    printf("\n--- RASTREAMENTO ---\n");
    printf("Valor em 'pont1' (aponta para a):     %p\n", pont1);
    printf("Valor em 'pont2' (aponta para pont1): %p\n", pont2);
    
    // Desreferenciando Nível 1
    printf("Desreferenciando 1x (*pont2):         %p\n", *pont2);

    printf("\n--- VALOR FINAL ---\n");
    
    // Desreferenciando Nível 2 (Chegando ao valor inteiro)
    printf("Desreferenciando 2x (**pont2):        %d\n", **pont2);

    return 0;
}
