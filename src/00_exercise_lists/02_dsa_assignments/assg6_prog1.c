#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 100

int stack61[SIZE];

int top = -1;

void push61(int element)
{
    if (top >= SIZE)
    {
        printf("Erro! Estouro de pilha detectado!!.\n");
        return;
    }

    top++;
    stack61[top] = element;
    printf("Elemento empilhado.\n");
}

int pop61()
{
    if (top < 0)
    {
        printf("Pilha vazia. Operacao de pop impossivel\n");
        return INT_MIN;
    }
    else
    {
        return stack61[top--];
    }
}

int assg6prog1()
{
    int userChoice, data;

    while (1)
    {
        printf("****************Favor selecionar uma opcao***********\n");
        printf("1. Empilhar elemento\n");
        printf("2. Desempilhar elemento\n");
        printf("3. Verificar pilha\n");
        printf("4. Quit program\n");
        printf("Informe a opcao: ");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            printf("Informe os dados para empilhar: ");
            scanf("%d", &data);
            push61(data);
            break;
        case 2:
            data = pop61();
            if (data != INT_MIN)
                printf("Dados => %d\n", data);
            break;
        case 3:
            printf("Tamanho da pilha: %d\n", top + 1);
            break;
        case 4:
            printf("Saindo do programa...\n");
            exit(0);
            break;
        default:
            printf("Opcao invalida, favor inserir apenas 1, 2, 3 ou 4.\n");
        }
    }

    return 0;
}
