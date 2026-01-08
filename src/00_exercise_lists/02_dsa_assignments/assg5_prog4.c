#include <stdio.h>
#include <stdlib.h>

struct node54
{
    int num;
    struct node54 *nextptr;
} *stnode54;

void ClListcreation54(int n)
{
    int i, num;
    struct node54 *preptr, *newnode54;

    if (n >= 1)
    {
        stnode54 = (struct node54 *)malloc(sizeof(struct node54));

        printf(" Informe os dados para o no 1: ");
        scanf("%d", &num);
        stnode54->num = num;
        stnode54->nextptr = NULL;
        preptr = stnode54;
        for (i = 2; i <= n; i++)
        {
            newnode54 = (struct node54 *)malloc(sizeof(struct node54));
            printf(" Informe os dados para o no %d: ", i);
            scanf("%d", &num);
            newnode54->num = num;
            newnode54->nextptr = NULL;
            preptr->nextptr = newnode54;
            preptr = newnode54;
        }
        preptr->nextptr = stnode54;
    }
}

void displayClList54()
{
    struct node54 *tmp;
    int n = 1;

    if (stnode54 == NULL)
    {
        printf(" Nenhum dado encontrado na lista ainda.");
    }
    else
    {
        tmp = stnode54;
        printf("\n\n Dados inseridos na lista:\n");

        do
        {
            printf(" Data %d = %d\n", n, tmp->num);

            tmp = tmp->nextptr;
            n++;
        } while (tmp != stnode54);
    }
}

int assg5prog4()
{
    int n;
    stnode54 = NULL;
    printf("\n\n Lista Circular Encadeada: Criar e exibir uma lista circular encadeada:\n");
    printf("-----------------------------------------------------------------------\n");

    printf(" Informe o numero de nos: ");
    scanf("%d", &n);

    ClListcreation54(n);
    displayClList54();

    return 0;
}
