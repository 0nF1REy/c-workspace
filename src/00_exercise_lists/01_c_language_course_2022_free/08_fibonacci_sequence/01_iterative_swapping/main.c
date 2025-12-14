#include <stdio.h>

int main(void) {
    int termos = 8;
    int t1 = 0;
    int t2 = 1;
    int proximo;

    printf("--- FIBONACCI (8 TERMOS) ---\n");

    for (int i = 1; i <= termos; i++) {
        // Imprime o termo atual
        printf("%d ", t1);

        // Calcula o próximo passo
        proximo = t1 + t2;
        
        // Atualiza as variáveis para a próxima volta (o passo da "minhoca")
        t1 = t2;
        t2 = proximo;
    }

    printf("\n");
    return 0;
}
