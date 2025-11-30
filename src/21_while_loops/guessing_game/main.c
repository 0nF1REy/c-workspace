#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para time()

int main(void) {
    // Semente para gerar números aleatórios diferentes a cada execução
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    int numero_secreto = (rand() % 100) + 1;
    int palpite = 0;
    int tentativas = 0;

    printf("--- JOGO DE ADIVINHAÇÃO (WHILE LOOP) ---\n");
    printf("Tente adivinhar o número entre 1 e 100.\n\n");

    // O loop continua ENQUANTO o palpite for diferente do segredo
    while (palpite != numero_secreto) {
        printf("Digite seu palpite: ");
        
        if (scanf("%d", &palpite) != 1) {
            printf("Por favor, digite apenas números!\n");
            // Limpa o buffer caso digite letras
            while (getchar() != '\n'); 
            continue;
        }

        tentativas++; // Incrementa o contador

        if (palpite > numero_secreto) {
            printf("-> Muito alto! Tente um valor menor.\n");
        } else if (palpite < numero_secreto) {
            printf("-> Muito baixo! Tente um valor maior.\n");
        } else {
            printf("\nPARABÉNS! Você acertou o número %d!\n", numero_secreto);
            printf("Total de tentativas: %d\n", tentativas);
        }
        printf("----------------------------------------\n");
    }

    return 0;
}
