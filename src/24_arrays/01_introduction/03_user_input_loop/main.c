#include <stdio.h>

int main(void) {

    int v[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Insira um dado para a posição %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nDados inseridos: ");
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
    
    printf("\n");
    
    return 0;
}
