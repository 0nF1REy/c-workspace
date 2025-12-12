#include <stdio.h>

// Procedimento que recebe os dados e decide o que imprimir
void analisar_numeros(int a, int b) {
    if (a == b) {
        printf(">> Os números são iguais.\n");
        return;
    }

    if (a > b) {
        printf(">> O maior número é: %d\n", a);
    } else {
        printf(">> O maior número é: %d\n", b);
    }
}

int main(void) {
    int x, y;

    printf("--- COMPARADOR MODULAR ---\n");
    
    printf("Digite dois números (ex: 10 20): ");
    scanf("%d %d", &x, &y);

    analisar_numeros(x, y);

    return 0;
}
