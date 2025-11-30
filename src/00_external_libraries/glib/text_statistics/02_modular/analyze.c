#include "analyze.h"
#include <glib.h>

void analyze_content(const gchar *content, const gchar *filename) {
gchar **words = g_strsplit_set(content, " \n\t", -1);
int word_count = 0;

for (int i = 0; words[i] != NULL; i++) {
    if (g_utf8_strlen(words[i], -1) > 0)
        word_count++;
}

g_print("=== Estatísticas: %s ===\n", filename);
g_print("Caracteres: %d\n", g_utf8_strlen(content, -1));
g_print("Palavras: %d\n\n", word_count);

g_strfreev(words);

}
