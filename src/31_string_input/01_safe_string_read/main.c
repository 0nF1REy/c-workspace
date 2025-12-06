#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[20];

    printf("--- LEITURA SEGURA (FGETS) ---\n");
    printf("Digite uma frase curta (max 19 chars): ");

    // Leitura segura (respeita o tamanho do buffer)
    fgets(frase, sizeof(frase), stdin);

    // Remove o caractere de nova linha (\n) final
    frase[strcspn(frase, "\n")] = '\0';

    printf("\nResultado processado: [%s]\n", frase);
    printf("Tamanho capturado: %lu caracteres\n", strlen(frase));

    return 0;
}
