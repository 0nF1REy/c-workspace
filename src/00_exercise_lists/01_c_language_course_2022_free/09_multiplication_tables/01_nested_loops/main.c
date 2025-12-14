#include <stdio.h>

int main(void) {
    printf("--- TABUADAS DE 1 A 10 ---\n");

    // Loop Externo: Define o número base (1 a 10)
    for (int i = 1; i <= 10; i++) {
        
        printf("\nTabuada do %d:\n", i);
        printf("--------------\n");

        // Loop Interno: Multiplica o base por 1 a 10
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
