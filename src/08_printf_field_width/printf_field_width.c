#include <stdio.h>

int main(void) {
    int a = 42;
    double b = 3.14159;

    /* Largura mínima do campo */
    printf("Numero inteiro com largura 5: '%5d'\n", a);
    printf("Numero inteiro com largura 10: '%10d'\n", a);

    /* Alinhamento à esquerda */
    printf("Inteiro alinhado à esquerda (5): '%-5d'\n", a);

    /* Preenchimento com zeros */
    printf("Inteiro com zeros (5): '%05d'\n", a);

    /* Floats com precisão e largura */
    printf("Float largura 10, 2 casas: '%10.2f'\n", b);
    printf("Float largura 8, 4 casas:  '%8.4f'\n", b);

    /* Texto com largura fixa */
    printf("Texto largura 12: '%12s'\n", "Alan");
    printf("Texto alinhado à esquerda: '%-12s'\n", "Alan");

    return 0;
}
