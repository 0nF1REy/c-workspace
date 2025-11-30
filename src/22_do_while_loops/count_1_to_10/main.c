#include <stdio.h>

int main(void) {
    
    int i = 1;

    printf("--- Contando de 1 a 10 com DO-WHILE ---\n");

    do {

        printf("%d\n", i);       
        i++; 

    } while (i <= 10);
    
    return 0;
}
