#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

int main(void) {
    char input[256];
    char *endptr;
    long value;

    printf("Digite um número: ");
    if (!fgets(input, sizeof(input), stdin)) {
        printf("Erro de leitura.\n");
        return 1;
    }

    // Remove newline
    input[strcspn(input, "\n")] = '\0';

    value = strtol(input, &endptr, 10);

    // 1. Nenhum dígito válido lido
    if (endptr == input) {
        printf("Entrada inválida: nenhum número encontrado.\n");
        return 1;
    }

    // 2. Overflow real detectado
    if (value == LONG_MIN || value == LONG_MAX) {
        printf("Erro: número grande demais (overflow).\n");
        return 1;
    }

    // 3. Sobras (lixo no buffer interno da string)
    if (*endptr != '\0') {
        printf("Existe lixo após o número: '%s'\n", endptr);
        return 1;
    }

    // 4. Se for preciso garantir que cabe em int:
    if (value < INT_MIN || value > INT_MAX) {
        printf("Erro: valor não cabe em int.\n");
        return 1;
    }

    printf("Número válido: %ld\n", value);
    
    return 0;
}
