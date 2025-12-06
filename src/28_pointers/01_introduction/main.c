#include <stdio.h>

int main(void) {
    printf("--- INTRODUÇÃO A PONTEIROS ---\n\n");

    // 1. Variável Normal
    int numero = 42;
    
    // 2. Ponteiro
    // Lê-se: "ptr é um ponteiro (*) que aponta para um inteiro"
    // O operador '&' significa "Endereço de". Pegamos o endereço da variável 'numero'.
    int *ptr = &numero;

    printf("1. Variável 'numero':\n");
    printf("   - Valor: %d\n", numero);
    printf("   - Endereço na Memória (onde ela mora): %p\n", &numero); // %p é para pointer

    printf("\n2. Variável 'ptr' (O Ponteiro):\n");
    printf("   - Valor que ele guarda (O endereço do numero): %p\n", ptr);
    printf("   - Endereço dele próprio (onde o ponteiro mora): %p\n", &ptr);

    printf("\n3. A Mágica do Desreferenciamento (*):\n");
    // O operador '*' antes do ponteiro significa:
    // "Vá até o endereço que você tem guardado e pegue o valor de lá".
    printf("   - Usando *ptr para ler o valor: %d\n", *ptr);

    printf("\n4. Modificando à distância:\n");
    // Se eu mudo o valor através do ponteiro...
    *ptr = 100; 
    
    // ... a variável original muda! Porque mexemos na "casa" usando o "endereço".
    printf("   - Mudei *ptr para 100.\n");
    printf("   - Novo valor de 'numero': %d\n", numero);

    return 0;
}
