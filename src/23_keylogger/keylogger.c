#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>
#include <string.h>
#include "keymap.h"

int main(int argc, char **argv) {
    // Dispositivo de entrada do teclado
    const char *device = "/dev/input/event2";

    struct input_event ev;
    
    // Abre o dispositivo para leitura
    int fd = open(device, O_RDONLY);
    if (fd < 0) {
        perror("Erro ao abrir o dispositivo");
        return -1;
    }

    while (1) {
        ssize_t bytes = read(fd, &ev, sizeof(ev));
        if (bytes < (ssize_t) sizeof(ev)) {
            perror("Erro na leitura do dispositivo");
            close(fd);
            return -1;
        }

        // ev.value == 0 -> tecla liberada
        // ev.value == 1 -> tecla pressionada
        // ev.value == 2 -> repetição automática
        if (ev.type == EV_KEY && ev.value == 1) {
            const char *key = key_code_names[ev.code];
            printf("%s", key);
            fflush(stdout);
        }
    }

    close(fd);
    return 0;
}
