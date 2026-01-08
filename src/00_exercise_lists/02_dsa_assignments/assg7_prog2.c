#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue_arr[MAX];
int rear = -1;
int front = -1;

int isFull()
{
        if (rear == MAX - 1)
                return 1;
        else
                return 0;
}

int isEmpty()
{
        if (front == -1 || front == rear + 1)
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
        rear = rear + 1;
        queue_arr[rear] = item;
}

int del()
{
        int item;
        if (isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item = queue_arr[front];
        front = front + 1;
        return item;
}

int peek()
{
        if (isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue_arr[front];
}

void display()
{
        int i;
        if (isEmpty())
        {
                printf("\nFila vazia\n");
                return;
        }
        printf("\nFila:\n\n");
        for (i = front; i <= rear; i++)
                printf("%d  ", queue_arr[i]);
        printf("\n\n");
}

int assg7prog2()
{
        int choice, item;
        while (1)
        {
                printf("\n1.Inserir\n");
                printf("2.Deletar\n");
                printf("3.Exibir elemento na frente\n");
                printf("4.Exibir todos os elementos da fila\n");
                printf("5.Quit\n");
                printf("\nInforme a opcao: ");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                        printf("\nInforme o elemento para adicionar na fila: ");
                        scanf("%d", &item);
                        insert(item);
                        break;
                case 2:
                        item = del();
                        printf("\nElemento deletado: %d\n", item);
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
