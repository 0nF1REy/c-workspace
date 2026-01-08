#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *rear = NULL;

int isEmpty()
{
    if (rear == NULL)
        return 1;
    else
        return 0;
}

void insert(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = item;
    if (tmp == NULL)
    {
        printf("\nMemory not available\n");
        return;
    }

    if (isEmpty())
    {
        rear = tmp;
        tmp->next = rear;
    }
    else
    {
        tmp->next = rear->next;
        rear->next = tmp;
        rear = tmp;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("\nQueue underflow\n");
        exit(1);
    }
    return rear->next->data;
}

void display()
{
    struct node *p;
    if (isEmpty())
    {
        printf("\nFila vazia\n");
        return;
    }
    printf("\nFila:\n");
    p = rear->next;
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != rear->next);
    printf("\n");
}

int del()
{
    int item;
    struct node *tmp;
    if (isEmpty())
    {
        printf("\nQueue underflow\n");
        exit(1);
    }
    if (rear->next == rear)
    {
        tmp = rear;
        rear = NULL;
    }
    else
    {
        tmp = rear->next;
        rear->next = rear->next->next;
    }
    item = tmp->data;
    free(tmp);
    return item;
}

int assg7prog6()
{
    int choice, item;
    while (1)
    {
        printf("\n1.Inserir\n");
        printf("2.Deletar\n");
        printf("3.Consultar\n");
        printf("4.Exibir\n");
        printf("5.Quit\n");
        printf("\nInforme a opcao: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nInforme o elemento para insercao: ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("\nElemento deletado: %d\n", del());
            break;
        case 3:
            printf("\nItem na frente da fila: %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nEscolha incorreta\n");
        }
    }
}
