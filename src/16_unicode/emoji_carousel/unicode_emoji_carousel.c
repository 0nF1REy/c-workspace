#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// =======================
// Leitura segura de inteiro
// =======================
int get_int_safely(void) {
    int value;
    int result;

    while (1) {
        result = scanf("%d", &value);

        if (result == 1) {
            return value;
        }

        printf("Entrada inválida! Digite apenas números.\n");

        // limpar buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
    }
}

// =======================
// Conversor Codepoint -> UTF-8
// =======================
void to_utf8(unsigned int cp, char *out) {
    if (cp <= 0x7F) {
        out[0] = cp;
        out[1] = 0;
    }
    else if (cp <= 0x7FF) {
        out[0] = 0xC0 | (cp >> 6);
        out[1] = 0x80 | (cp & 0x3F);
        out[2] = 0;
    }
    else if (cp <= 0xFFFF) {
        out[0] = 0xE0 | (cp >> 12);
        out[1] = 0x80 | ((cp >> 6) & 0x3F);
        out[2] = 0x80 | (cp & 0x3F);
        out[3] = 0;
    }
    else {
        out[0] = 0xF0 | (cp >> 18);
        out[1] = 0x80 | ((cp >> 12) & 0x3F);
        out[2] = 0x80 | ((cp >> 6) & 0x3F);
        out[3] = 0x80 | (cp & 0x3F);
        out[4] = 0;
    }
}

// =======================
// Extrai "U+XXXX" do JSON
// =======================
unsigned int parse_codepoint(const char *str) {
    unsigned int cp = 0;
    sscanf(str, "U+%X", &cp);
    return cp;
}

int main(void) {
    FILE *fp = fopen("unicode_list.json", "r");
    if (!fp) {
        printf("Erro ao abrir unicode_list.json\n");
        return 1;
    }

    char buffer[8192];
    size_t len = fread(buffer, 1, sizeof(buffer)-1, fp);
    buffer[len] = '\0';
    fclose(fp);

    printf("=== Emoji Carousel ===\n");

    // Detectar quantidade de itens
    int max_id = 0;
    char *ptr = buffer;

    while ((ptr = strstr(ptr, "\"id\"")) != NULL) {
        int id = 0;
        sscanf(ptr, "\"id\": %d", &id);
        if (id > max_id) max_id = id;
        ptr += 4;
    }

    if (max_id == 0) {
        printf("Nenhum item encontrado no JSON.\n");
        return 1;
    }

    printf("Itens encontrados: %d\n", max_id);

    int choice = 0;

    while (1) {
        
        printf("\nEscolha 1 a %d (0 para sair): ", max_id);

        choice = get_int_safely();

        if (choice == 0) {
            printf("Saindo...\n");
            break;
        }

        if (choice < 1 || choice > max_id) {
            printf("Opção inválida!\n");
            continue;
        }

        // Buscar item
        char pattern[32];
        sprintf(pattern, "\"id\": %d", choice);

        char *p = strstr(buffer, pattern);
        if (!p) {
            printf("Item não encontrado.\n");
            continue;
        }

        // Extrair codepoint
        char codepoint_str[16];
        char *cpPtr = strstr(p, "\"codepoint\"");
        if (!cpPtr) {
            printf("Codepoint não encontrado.\n");
            continue;
        }
        
        sscanf(cpPtr, "\"codepoint\": \"%15[^\"]\"", codepoint_str);

        unsigned int cp = parse_codepoint(codepoint_str);

        char utf8[8];
        to_utf8(cp, utf8);

        printf("Emoji: %s (%s)\n", utf8, codepoint_str);
    }

    return 0;
}
