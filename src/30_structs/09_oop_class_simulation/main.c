#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#define Class struct

Class Person;

Class Person {
    char nome[20];
    uint8_t age;
    uint8_t height;
    void (*show)(Class Person *self);
};

void person_print(Class Person *self) {
    printf("Nome: %s | Idade: %d | Altura: %d cm\n",
        self->nome, self->age, self->height);
}

Class Person * newPerson(char name[], uint8_t age, uint8_t height) {
    Class Person *self = (Class Person *) malloc(sizeof(Class Person));
    
    if (self == NULL) return NULL;

    strncpy(self->nome, name, sizeof(self->nome) - 1);
    self->nome[sizeof(self->nome) - 1] = '\0';
    
    self->age = age;
    self->height = height;
    self->show = &person_print;

    return self;
}

int main(void) {
    Class Person *p1 = newPerson("Fabio", 43, 180);

    if (p1 != NULL) {
        p1->show(p1);
        free(p1);
    }

    return 0;
}
