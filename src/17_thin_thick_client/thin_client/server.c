// server.c
// Pequeno servidor TCP que mantém uma lista de notas em memória.
// Protocolo simples (linhas de texto terminado em '\n'):
// ADD <texto>\n  -> adiciona nota
// LIST\n         -> envia todas as notas, cada uma em uma linha, termina com "==END==\n"
// QUIT\n         -> fecha conexão

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9090
#define BACKLOG 5
#define MAX_NOTES 1024
#define MAX_LINE 1024

char *notes[MAX_NOTES];
int notes_count = 0;

void add_note(const char *text) {
    if (notes_count >= MAX_NOTES) return;
    notes[notes_count++] = strdup(text);
}

void send_list(int client_fd) {
    char buf[MAX_LINE + 16];
    for (int i = 0; i < notes_count; ++i) {
        snprintf(buf, sizeof(buf), "%s\n", notes[i]);
        write(client_fd, buf, strlen(buf));
    }
    write(client_fd, "==END==\n", 8);
}

void handle_client(int client_fd) {
    char line[MAX_LINE];
    ssize_t n;
    while (1) {
        // Read a line (simple, byte-by-byte until '\n')
        size_t pos = 0;
        while (pos < sizeof(line)-1) {
            n = read(client_fd, &line[pos], 1);
            if (n <= 0) return; // EOF or error -> close
            if (line[pos] == '\n') {
                line[pos] = '\0';
                break;
            }
            pos++;
        }
        if (pos == 0 && n <= 0) return;
        // Parse command
        if (strncmp(line, "ADD ", 4) == 0) {
            add_note(line + 4);
            write(client_fd, "OK\n", 3);
        } else if (strcmp(line, "LIST") == 0) {
            send_list(client_fd);
        } else if (strcmp(line, "QUIT") == 0) {
            write(client_fd, "BYE\n", 4);
            return;
        } else {
            write(client_fd, "ERRO: Comando desconhecido\n", 20);
        }
    }
}

int main() {
    int server_fd, client_fd;
    struct sockaddr_in addr;
    socklen_t addrlen = sizeof(addr);

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) { perror("socket"); exit(1); }

    int opt = 1;
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr*)&addr, sizeof(addr)) < 0) { perror("bind"); exit(1); }
    if (listen(server_fd, BACKLOG) < 0) { perror("listen"); exit(1); }

    printf("Servidor ouvindo na porta %d\n", PORT);

    for (;;) {
        client_fd = accept(server_fd, (struct sockaddr*)&addr, &addrlen);
        if (client_fd < 0) { perror("accept"); continue; }
        printf("Cliente conectado: %s:%d\n",
               inet_ntoa(addr.sin_addr), ntohs(addr.sin_port));
        handle_client(client_fd);
        close(client_fd);
        printf("Cliente desconectado\n");
    }

    close(server_fd);
    return 0;
}
