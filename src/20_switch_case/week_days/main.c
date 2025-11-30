#include <stdio.h>

int main(void) {
    int dia;

    printf("--- VERIFICADOR DE DIAS DA SEMANA ---\n");
    printf("Digite um valor de 1 a 7: ");
    
    // Leitura simples
    if (scanf("%d", &dia) != 1) {
        printf("Erro: Você não digitou um número!\n");
        return 1; // Retorna 1 para indicar erro ao sistema
    }

    // Estrutura Switch
    switch (dia) {
        case 1:
            printf("Resultado: Domingo\n");
            break;
        case 2:
            printf("Resultado: Segunda-feira\n");
            break;
        case 3:
            printf("Resultado: Terça-feira\n");
            break;
        case 4:
            printf("Resultado: Quarta-feira\n");
            break;
        case 5:
            printf("Resultado: Quinta-feira\n");
            break;
        case 6:
            printf("Resultado: Sexta-feira\n");
            break;
        case 7:
            printf("Resultado: Sábado\n");
            break;
        default:
            // Captura qualquer número que não seja 1-7
            printf("Valor Inválido! O número deve estar entre 1 e 7.\n");
    }

    return 0;
}
