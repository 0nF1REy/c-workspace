#include <stdio.h>
#include <stdlib.h>

struct node33
{
    int num;                // Dados do no
    struct node33 *nextptr; // Endereco do proximo no
} *stnode;

void createNodeList33(int n)
{
    struct node33 *fnNode, *tmp;
    int num, i;
    stnode = (struct node33 *)malloc(sizeof(struct node33));

    if (stnode == NULL) // Verifica se fnnode e NULL e se nao ha alocacao de memoria
    {
        printf(" Nao foi possivel alocar memoria.");
    }
    else
    {
        // Le dados para o no pelo teclado

        printf(" Digite os dados para o no 1: ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL; // Liga o campo de endereco a NULL
        tmp = stnode;
        // Criando n nos e adicionando a lista encadeada
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node33 *)malloc(sizeof(struct node33));
            if (fnNode == NULL)
            {
                printf(" Nao foi possivel alocar memoria.");
                break;
            }
            else
            {
                printf(" Digite os dados para o no %d: ", i);
                scanf(" %d", &num);

                fnNode->num = num;      // liga o campo num de fnNode ao valor num
                fnNode->nextptr = NULL; // liga o campo de endereco de fnNode a NULL

                tmp->nextptr = fnNode; // liga o no anterior (tmp) ao fnNode
                tmp = tmp->nextptr;
            }
        }
    }
}

void displayList33()
{
    struct node33 *tmp;
    if (stnode == NULL)
    {
        printf("Lista vazia.");
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            printf(" Dados = %d\n", tmp->num); // Imprime os dados do no atual
            tmp = tmp->nextptr;                // Avanca a posicao do no atual
        }
    }
}

int assg3prog3()
{
    int n;
    printf("\n\n Lista Encadeada: Criar e exibir Lista Simplesmente Encadeada\n");
    printf("-------------------------------------------------------------\n");

    printf(" Informe a quantidade de nos: ");
    scanf("%d", &n);
    createNodeList33(n);
    printf("\n Dados inseridos na lista:\n");
    displayList33();

    return 0;
}
