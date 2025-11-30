#include <glib.h>
#include <locale.h>
#include "file_utils.h"
#include "analyze.h"

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");

    if (argc < 2) {
        g_print("Uso: %s arquivo1.txt [arquivo2.txt ...]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        gchar *content = read_file(argv[i]);
        if (content) {
            analyze_content(content, argv[i]);
            g_free(content);
        }
    }

    return 0;
}
