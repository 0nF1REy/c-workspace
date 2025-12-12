#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("--- COMPARADOR DE NÚMEROS ---\n");
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("\nResultado: ");

    // Lógica de Comparação
    if (n1 > n2) {
        printf("O maior é %d\n", n1);
    } 
    else if (n2 > n1) {
        printf("O maior é %d\n", n2);
    } 
    else {
        printf("Os números são iguais (%d)\n", n1);
    }

    return 0;
}
