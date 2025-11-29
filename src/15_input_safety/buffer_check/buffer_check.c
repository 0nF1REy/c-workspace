#include <stdio.h>

int has_buffer_garbage(void) {
    int c;

    c = getchar();

    if (c == '\n' || c == EOF)
        return 0;

    ungetc(c, stdin);
    return 1;
}

int main(void) {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (has_buffer_garbage()) {
        printf("Existe lixo no buffer!\n");
    } else {
        printf("Buffer limpo.\n");
    }

    // Limpa o restante do buffer
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    return 0;
}
