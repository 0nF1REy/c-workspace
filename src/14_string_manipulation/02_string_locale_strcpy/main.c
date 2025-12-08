#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char original[50] = "Olá, mundo!";
    char copia[50];

    printf("Antes do strcpy:\n");
    printf("Original: %s\n", original);
    printf("Cópia: %s\n", copia);

    strcpy(copia, original);

    printf("\nDepois do strcpy:\n");
    printf("Original: %s\n", original);
    printf("Cópia: %s\n", copia);

    return 0;
}
