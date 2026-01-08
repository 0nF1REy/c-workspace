#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int cqueue_arr[MAX];
int front = -1;
int rear = -1;

int isFull()
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        return 1;
    else
        return 0;
}

void insert(int item)
{
    if (isFull())
    {
        printf("\nEstouro de Fila\n");
        return;
    }
    if (front == -1)
        front = 0;

    if (rear == MAX - 1)
        rear = 0;
    else
        rear = rear + 1;
    cqueue_arr[rear] = item;
}

int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

int peek()
{
    if (isEmpty())
    {
        printf("\nQueue Underflow\n");
        exit(1);
    }
    return cqueue_arr[front];
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nFila vazia\n");
        return;
    }
    printf("\nElementos da Fila:\n");
    i = front;
    if (front <= rear)
    {
        while (i <= rear)
            printf("%d ", cqueue_arr[i++]);
    }
    else
    {
        while (i <= MAX - 1)
            printf("%d ", cqueue_arr[i++]);
        i = 0;
        while (i <= rear)
            printf("%d ", cqueue_arr[i++]);
    }
    printf("\n");
}

int del()
{
    int item;
    if (isEmpty())
    {
        printf("\nQueue Underflow\n");
        exit(1);
    }
    item = cqueue_arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
        front = 0;
    else
        front = front + 1;
    return item;
}

int assg7prog5()
{
    int choice, item;
    while (1)
    {
        printf("\n1.Inserir\n");
        printf("2.Deletar\n");
        printf("3.Consultar\n");
        printf("4.Exibir\n");
        printf("5.Quit\n");
        printf("Informe a opcao: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Informe o elemento para insercao: ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            printf("\nElemento deletado: %d\n", del());
            break;
        case 3:
            printf("\nElemento na frente: %d\n", peek());
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
    return 0;
}
