#include <stdio.h>
#include <string.h>
#include <stdint.h>

struct Person {
    char nome[10];
    uint8_t age;
    uint8_t height;
};

struct Person createPerson(char *nome, uint8_t age, uint8_t height) {
    struct Person p;
    
    strncpy(p.nome, nome, sizeof(p.nome) - 1);
    p.nome[sizeof(p.nome) - 1] = '\0';
    
    p.age = age;
    p.height = height;
    
    return p;
}

// Passagem por Referência (Ponteiro)
void printPerson(struct Person *p) {
    printf("\n[Via Ponteiro]\n");
    printf("Nome:     %s\n", p->nome);
    printf("Idade:    %d\n", p->age);
    printf("Endereço: %p (Original)\n", (void*)p);
}

// Passagem por Valor (Cópia)
void printPerson2(struct Person p) {
    printf("\n[Via Valor]\n");
    printf("Nome:     %s\n", p.nome);
    printf("Idade:    %d\n", p.age);
    printf("Endereço: %p (Cópia)\n", (void*)&p);
}

int main(void) {
    struct Person person1 = createPerson("Alan Ryan", 21, 170);

    printPerson(&person1);
    printPerson2(person1);

    return 0;
}
