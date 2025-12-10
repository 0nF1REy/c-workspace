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

    for (i = 1; i <= TOTAL_GRADES; i++) {
        while (1) {
            printf("Digite a %dª nota (0 a 10): ", i);

            // Verifica se digitou número
            if (scanf("%f", &grade) != 1) {
                printf("Entrada inválida! Digite um número.\n");

                // limpar buffer
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;
            }

            // Verifica faixa da nota
            if (grade < 0.0f || grade > 10.0f) {
                printf("A nota deve estar entre 0 e 10.\n");

                // limpar buffer (caso sobre lixo)
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;
            }

            break; // entrada válida
        }

        sum += grade;
    }

    average = sum / TOTAL_GRADES;

    printf("\nMédia final: %.2f\n", average);

    if (average >= PASSING_GRADE) {
        printf("Status: APROVADO\n");
    } else {
        printf("Status: REPROVADO\n");
    }

    return 0;
}
