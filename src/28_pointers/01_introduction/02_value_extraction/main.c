#include <stdio.h>

int main(void) {
    
    int valor = 35;
    int *x = &valor; // x aponta para valor
    int y;

    // A Mágica: y recebe o que tem DENTRO do endereço apontado por x
    y = *x;

    printf("--- OPERAÇÕES COM PONTEIROS ---\n");
    printf("1. Endereço de 'valor': %p\n", &valor);
    
    printf("2. Valor de x (Endereço que ele guarda): %p\n", x);
    
    printf("3. Endereço do próprio x: %p\n", &x);
    printf("4. Valor apontado por x (*x): %d\n", *x);
    printf("5. Valor copiado para y: %d\n", y);

    return 0;
}
