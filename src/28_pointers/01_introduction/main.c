#include <stdio.h>

int main(void) {
    printf("--- INTRODUÇÃO A PONTEIROS ---\n\n");

    int numero = 42;
    int *ptr = &numero;

    // 1. Exibindo a variável original
    printf("1. Variável 'numero':\n");
    printf("   - Valor: %d\n", numero);
    printf("   - Endereço de memória: %p\n", &numero);

    // 2. Exibindo o ponteiro
    printf("\n2. Ponteiro 'ptr':\n");
    printf("   - Valor armazenado (endereço de numero): %p\n", ptr);
    printf("   - Endereço do próprio ponteiro: %p\n", &ptr);

    // 3. Desreferenciamento (Acessando o valor pelo ponteiro)
    printf("\n3. Lendo valor via ponteiro (*ptr):\n");
    printf("   - Valor: %d\n", *ptr);

    // 4. Modificação Indireta
    printf("\n4. Modificando valor via ponteiro (*ptr = 100)...\n");
    *ptr = 100;

    printf("   - Novo valor de 'numero': %d\n", numero);

    return 0;
}
