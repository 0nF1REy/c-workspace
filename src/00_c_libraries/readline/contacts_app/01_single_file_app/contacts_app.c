#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAX_CONTACTS 10

typedef struct {
    char name[50];
    char phone[20];
} Contact;

int main() {
    Contact contacts[MAX_CONTACTS];
    int count = 0;

    printf("=== Agenda com Readline ===\n");

    while (count < MAX_CONTACTS) {
        char *name = readline("Nome (ou ENTER para sair): ");
        if (!name || strlen(name) == 0) {
            free(name);
            break;
        }

        char *phone = readline("Telefone: ");

        strncpy(contacts[count].name, name, sizeof(contacts[count].name));
        strncpy(contacts[count].phone, phone, sizeof(contacts[count].phone));

        free(name);
        free(phone);

        count++;
    }

    printf("\n=== Contatos Salvos ===\n");
    for (int i = 0; i < count; i++) {
        printf("%d) %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }

    return 0;
}
