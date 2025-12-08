#include <stdio.h>
#include <string.h>

#define MAX_ESTUDANTES 3
#define NUM_NOTAS 3

// Definição da struct com typedef
typedef struct {
    char nome[50];
    float notas[NUM_NOTAS];  // Vetor dentro da struct
} Estudante;

int main(void) {
    
    Estudante turma[MAX_ESTUDANTES];  // Vetor de structs

    // Preenchendo dados manualmente
    strcpy(turma[0].nome, "Ryuji Danma");
    turma[0].notas[0] = 10.0;
    turma[0].notas[1] = 9.5;
    turma[0].notas[2] = 10.0;

    strcpy(turma[1].nome, "Tomoko Nomura");
    turma[1].notas[0] = 8.0;
    turma[1].notas[1] = 7.5;
    turma[1].notas[2] = 9.0;

    strcpy(turma[2].nome, "Urumi Kanzaki");
    turma[2].notas[0] = 9.5;
    turma[2].notas[1] = 10.0;
    turma[2].notas[2] = 9.0;

    // Exibindo os dados
    printf("--- TURMA DE ESTUDANTES ---\n\n");
    for(int i = 0; i < MAX_ESTUDANTES; i++) {
        printf("Nome: %s\n", turma[i].nome);
        printf("Notas: ");
        for(int j = 0; j < NUM_NOTAS; j++) {
            printf("%.1f ", turma[i].notas[j]);
        }
        printf("\n\n");
    }

    return 0;
}
