#include <stdio.h>
#include <string.h>
#include <stdint.h> // Biblioteca padrão para uint8_t

struct Person {
    char nome[10];
    uint8_t age;    // Usa apenas 1 byte (0 a 255)
    uint8_t height; // Usa apenas 1 byte (cm)
};

int main(void) {
    struct Person person;

    // Preenchendo os dados
    strcpy(person.nome, "Alan Ryan");
    person.age = 21;
    person.height = 170;

    printf("--- STRUCT COM TIPOS FIXOS ---\n");
    printf("Nome: %s\n", person.nome);
    printf("Idade: %d anos\n", person.age);
    
    // Exibindo o endereço de memória corretamente
    printf("Endereço da struct na memória: %p\n", (void*)&person);

    return 0;
}
