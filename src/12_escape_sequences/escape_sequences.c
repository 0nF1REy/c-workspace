#include <stdio.h>

int main(void) {
    // Cabeçalho
    printf("=== Demonstracao de Sequencias de Escape em C ===\n\n");

    // Tabela de exemplos
    printf("1. Nova linha (\\n):\n");
    printf("Exemplo: Linha 1\nLinha 2\n\n");

    printf("2. Tabulacao horizontal (\\t):\n");
    printf("Exemplo: Coluna 1\tColuna 2\tColuna 3\n\n");

    printf("3. Barra invertida (\\\\):\n");
    printf("Exemplo: C:\\\\Users\\\\Alan\\\\Documentos\n\n");

    printf("4. Aspas duplas (\\\"):\n");
    printf("Exemplo: \"Texto entre aspas\"\n\n");

    printf("5. Aspas simples (\\\'):\n");
    printf("Exemplo: \'A\'\n\n");

    printf("6. Alarme (\\a): *pode nao soar em alguns terminais*\n");
    printf("Exemplo: \a\n\n");

    printf("7. Retrocesso (\\b):\n");
    printf("Exemplo: ABC\bD  (o C e apagado)\n\n");

    printf("8. Carriage return (\\r):\n");
    printf("Exemplo: Teste\rOK\n");

    printf("\n9. Tabulacao vertical (\\v):\n");
    printf("Exemplo: Texto\vTexto  (efeito varia por terminal)\n\n");

    printf("10. Feed de pagina (\\f):\n");
    printf("Exemplo: Linha antes\fLinha depois  (efeito varia por terminal)\n\n");

    printf("11. Hexadecimal (\\xNN):\n");
    printf("Exemplo: Letra A = \x41\n\n");

    printf("12. Octal (\\NNN):\n");
    printf("Exemplo: Letra A = \101\n\n");

    printf("=== Fim ===\n");

    return 0;
}
