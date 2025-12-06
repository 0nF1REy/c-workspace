#include <stdio.h>

int main(void) {

    int v[5];
    float media;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5.0;

    printf("Valores: %d, %d, %d, %d, %d\n", v[0], v[1], v[2], v[3], v[4]);
    printf("Média final: %.2f\n", media);

    return 0;
}
