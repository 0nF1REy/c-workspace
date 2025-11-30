#include "file_utils.h"
#include <glib.h>
#include <stdio.h>

gchar* read_file(const gchar *filename) {
gchar *content = NULL;
gsize length = 0;

if (!g_file_get_contents(filename, &content, &length, NULL)) {
    g_print("Erro ao abrir o arquivo: %s\n", filename);
    return NULL;
}

return content;

}
