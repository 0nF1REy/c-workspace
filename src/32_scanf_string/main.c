#include <stdio.h>

int main() {
    char s[10];

    printf("Digite algo (scanf convencional):\n");
    scanf("%9s", s);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scanf com coletor de linha):\n");
    scanf("%9[^\n]", s);

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Resultado: %s\n\n", s);

    return 0;
}
