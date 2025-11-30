// fat_client.c
// Cliente "gordo" que manipula notas localmente em arquivo "notes.db".
// Suporta os mesmos comandos: ADD <texto>, LIST, QUIT (local).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DBFILE "notes.db"
#define MAX_LINE 1024

void add_local(const char *text) {
    FILE *f = fopen(DBFILE, "a");
    if (!f) { perror("fopen"); return; }
    fprintf(f, "%s\n", text);
    fclose(f);
    printf("OK\n");
}

void list_local() {
    FILE *f = fopen(DBFILE, "r");
    char line[MAX_LINE];
    if (!f) {
        // arquivo não existe -> lista vazia
        printf("==END==\n");
        return;
    }
    while (fgets(line, sizeof(line), f)) {
        fputs(line, stdout);
    }
    printf("==END==\n");
    fclose(f);
}

int main() {
    char input[MAX_LINE];

    printf("Fat client (local). Arquivo: %s\n", DBFILE);
    printf("Comandos: ADD <texto>, LIST, QUIT\n");

    while (1) {
        printf("> ");
        if (!fgets(input, sizeof(input), stdin)) break;
        // remove newline
        size_t len = strlen(input);
        if (len && input[len-1] == '\n') input[len-1] = '\0';

        if (strncmp(input, "ADD ", 4) == 0) {
            add_local(input + 4);
        } else if (strcmp(input, "LIST") == 0) {
            list_local();
        } else if (strcmp(input, "QUIT") == 0) {
            printf("BYE\n");
            break;
        } else {
            printf("ERRO: Comando desconhecido\n");
        }
    }

    printf("Fat client encerrado\n");
    return 0;
}
