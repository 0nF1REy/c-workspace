#include <stdio.h>
#include "json_utils.h"

void save_contacts_json(Contact contacts[], int count) {
    FILE *f = fopen("contacts.json", "w");
    if (!f) {
        perror("Erro ao criar o arquivo JSON");
        return;
    }

    fprintf(f, "[\n");
    for (int i = 0; i < count; i++) {
        fprintf(f, "  {\n");
        fprintf(f, "    \"name\": \"%s\",\n", contacts[i].name);
        fprintf(f, "    \"phone\": \"%s\"\n", contacts[i].phone);
        if (i < count - 1) fprintf(f, "  },\n");
        else fprintf(f, "  }\n");
    }
    fprintf(f, "]\n");

    fclose(f);
}
