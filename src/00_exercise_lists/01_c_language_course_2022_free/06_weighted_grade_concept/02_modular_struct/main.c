#include <stdio.h>

// Estrutura para agrupar os resultados do aluno
typedef struct {
    float media;
    char conceito;
} Boletim;

// Processamento das notas e retorno do boletim completo
Boletim gerar_boletim(float lab, float sem, float exame) {
    Boletim b;
    
    // Cálculo da Média
    b.media = (lab * 2 + sem * 3 + exame * 5) / 10.0;

    // Lógica do Conceito
    if (b.media >= 8.0)      b.conceito = 'A';
    else if (b.media >= 7.0) b.conceito = 'B';
    else if (b.media >= 6.0) b.conceito = 'C';
    else if (b.media >= 5.0) b.conceito = 'D';
    else                     b.conceito = 'E';

    return b;
}

int main(void) {
    float n1, n2, n3;

    printf("--- GERADOR DE BOLETIM (MODULAR) ---\n");
    
    printf("Digite as 3 notas (Lab, Semestral, Exame): ");
    scanf("%f %f %f", &n1, &n2, &n3);

    // Chamada da função que faz todo o trabalho sujo
    Boletim aluno = gerar_boletim(n1, n2, n3);

    printf("\n[Relatório do Aluno]\n");
    printf("Média:    %.2f\n", aluno.media);
    printf("Conceito: %c\n", aluno.conceito);

    return 0;
}
