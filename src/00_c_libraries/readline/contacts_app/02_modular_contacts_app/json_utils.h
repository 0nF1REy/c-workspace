#ifndef JSON_UTILS_H
#define JSON_UTILS_H

typedef struct {
    char name[50];
    char phone[20];
} Contact;

// Função para salvar contatos em JSON
void save_contacts_json(Contact contacts[], int count);

#endif
