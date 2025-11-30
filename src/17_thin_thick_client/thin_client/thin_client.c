// thin_client.c
// Cliente interativo que conecta ao server e usa o protocolo ADD/LIST/QUIT.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9090
#define MAX_LINE 1024

int main() {
    int sock;
    struct sockaddr_in server;
    char input[MAX_LINE];
    char buf[MAX_LINE];
    ssize_t n;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) { perror("socket"); return 1; }

    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(sock, (struct sockaddr*)&server, sizeof(server)) < 0) {
        perror("connect");
        return 1;
    }

    printf("Conectado ao servidor thin (127.0.0.1:%d)\n", PORT);
    printf("Comandos: ADD <texto>, LIST, QUIT\n");

    while (1) {
        printf("> ");
        if (!fgets(input, sizeof(input), stdin)) break;
        // ensure newline present
        size_t len = strlen(input);
        if (len == 0) continue;
        if (input[len-1] != '\n') {
            // flush rest
            int c; while ((c = getchar()) != '\n' && c != EOF);
            input[len] = '\n'; input[len+1] = '\0';
            len++;
        }

        if (write(sock, input, strlen(input)) < 0) { perror("write"); break; }

        // If LIST, server will stream multiple lines until "==END=="
        if (strncmp(input, "LIST", 4) == 0) {
            while (1) {
                n = read(sock, buf, sizeof(buf)-1);
                if (n <= 0) { perror("read"); goto done; }
                buf[n] = '\0';
                // Print chunk and check terminator
                printf("%s", buf);
                if (strstr(buf, "==END==")) break;
            }
        } else {
            // Read a single-line response
            n = read(sock, buf, sizeof(buf)-1);
            if (n <= 0) { perror("read"); break; }
            buf[n] = '\0';
            printf("%s", buf);
            if (strncmp(buf, "BYE", 3) == 0) break;
        }
    }

done:
    close(sock);
    printf("Thin client encerrado\n");
    return 0;
}
