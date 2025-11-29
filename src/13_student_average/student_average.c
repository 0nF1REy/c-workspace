#include <stdio.h>

// Nota mínima para aprovação
#define PASSING_GRADE 6.0f

// Quantidade de notas a serem lidas
#define TOTAL_GRADES 3

int main(void) {
    float grade, sum = 0.0f; 
    float average;           
    int i;              

    printf("=== Cálculo da Média do Aluno ===\n\n");

    // Lê as notas e soma todas
    for (i = 1; i <= TOTAL_GRADES; i++) {
        printf("Digite a %dª nota: ", i);
        scanf("%f", &grade);
        sum += grade;
    }

    // Calcula a média
    average = sum / TOTAL_GRADES;

    // Exibe a média
    printf("\nMédia final: %.2f\n", average);

    // Verifica se foi aprovado ou reprovado
    if (average >= PASSING_GRADE) {
        printf("Status: APROVADO\n");
    } else {
        printf("Status: REPROVADO\n");
    }

    return 0;
}
