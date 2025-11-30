#include <glib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    // Configura o locale para UTF-8
    setlocale(LC_ALL, "");

    if (argc < 2) {
        g_print("Uso: %s arquivo.txt\n", argv[0]);
        return 1;
    }

    gchar *content = NULL;
    gsize length = 0;

    if (!g_file_get_contents(argv[1], &content, &length, NULL)) {
        g_print("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Divide em palavras usando espaço, tab e quebra de linha
    gchar **words = g_strsplit_set(content, " \n\t", -1);

    int word_count = 0;
    for (int i = 0; words[i] != NULL; i++) {
        if (g_utf8_strlen(words[i], -1) > 0)  // conta corretamente caracteres UTF-8
            word_count++;
    }

    g_print("=== Estatísticas ===\n");
    g_print("Caracteres: %d\n", g_utf8_strlen(content, -1));
    g_print("Palavras: %d\n", word_count);

    g_free(content);
    g_strfreev(words);

    return 0;
}
