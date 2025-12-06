#include <stdio.h>

int main(void) {
    
    int numeros[] = {10, 20, 30, 40, 50};
    
    // O nome do array 'numeros' é, na verdade, um ponteiro para o primeiro item!
    int *ptr = numeros;

    printf("--- USANDO ARRAYS COMO PONTEIROS ---\n\n");

    printf("1. Acessando pelo índice (Jeito Clássico):\n");
    printf("   numeros[0] = %d\n", numeros[0]);
    
    printf("\n2. Acessando pelo ponteiro (Desreferência):\n");
    printf("   *ptr       = %d\n", *ptr);

    printf("\n3. Aritmética de Ponteiros (A Mágica):\n");
    // (ptr + 1) -> Pega o endereço atual e pula 1 casa (4 bytes) pra frente
    // *(ptr + 1) -> Pega o valor que está nessa nova casa
    printf("   *(ptr + 1) = %d (Equivale a numeros[1])\n", *(ptr + 1));
    printf("   *(ptr + 2) = %d (Equivale a numeros[2])\n", *(ptr + 2));

    printf("\n4. Percorrendo com Loop de Ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        // Imprime o valor atual e DEPOIS avança o ponteiro para o próximo
        printf("   Valor: %d (Endereço: %p)\n", *ptr, ptr);
        ptr++; 
    }

    return 0;
}
