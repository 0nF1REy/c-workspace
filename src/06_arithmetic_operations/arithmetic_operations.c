#include <stdio.h>

int main(void) {
    int a = 5, b = 2;
    double resultado1 = a / b;            // Divisão inteira -> 2
    double resultado2 = (double)a / b;    // Divisão real -> 2.5

    printf("Divisão inteira: %lf\n", resultado1);
    printf("Divisão real: %lf\n", resultado2);

    int x = 10;
    int y = 3;

    printf("Soma: %d\n", x + y);
    printf("Multiplicação: %d\n", x * y);
    printf("Resto: %d\n", x % y);

    return 0;
}
