#include <stdio.h>
#include <stdlib.h>

struct node62
{
    int info;
    struct node62 *ptr;
} *top, *top1, *temp;

int count = 0;

void create62()
{
    top = NULL;
}

void stack_count62()
{
    printf("\nNumero de elementos na pilha: %d", count);
}

void push62(int data)
{
    if (top == NULL)
    {
        top = (struct node62 *)malloc(1 * sizeof(struct node62));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp = (struct node62 *)malloc(1 * sizeof(struct node62));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

void display62()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Pilha vazia.");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
}

void pop62()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\nErro: Tentando fazer pop de pilha vazia.");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Valor desempilhado: %d", top->info);
    free(top);
    top = top1;
    count--;
}

int topelement62()
{
    return (top->info);
}

void empty62()
{
    if (top == NULL)
        printf("\nPilha vazia.");
    else
        printf("\nPilha nao esta vazia com %d elementos.", count);
}

void destroy62()
{
    top1 = top;

    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;

    printf("\nTodos os elementos da pilha foram destruidos.");
    count = 0;
}

void assg6prog2()
{
    int no, ch, e;

    printf("\n1 - Empilhar");
    printf("\n2 - Desempilhar");
    printf("\n3 - Topo");
    printf("\n4 - Vazio");
    printf("\n5 - Sair");
    printf("\n6 - Exibir");
    printf("\n7 - Contagem da Pilha");
    printf("\n8 - Destruir Pilha");

    create62();

    while (1)
    {
        printf("\n Informe a opcao: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Informe os dados: ");
            scanf("%d", &no);
            push62(no);
            break;
        case 2:
            pop62();
            break;
        case 3:
            if (top == NULL)
                printf("Nenhum elemento na pilha.");
            else
            {
                e = topelement62();
                printf("\n Elemento no topo: %d", e);
            }
            break;
        case 4:
            empty62();
            break;
        case 5:
            exit(0);
        case 6:
            display62();
            break;
        case 7:
            stack_count62();
            break;
        case 8:
            destroy62();
            break;
        default:
            printf("Escolha incorreta. Informe a opcao correta.");
            break;
        }
    }
}
