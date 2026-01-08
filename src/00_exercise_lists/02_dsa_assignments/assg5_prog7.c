#include <stdio.h>
#include <stdlib.h>

struct node57
{
    int num;
    struct node57 *next;
};

void move57(struct node57 *head)
{
    struct node57 *p, *q;
    int ch;

    p = q = head;
    printf("\nPonteiro em %d\n", head->num);
    do
    {
        printf("Selecione a opcao:\n1. Mover para frente\n2. Mover para tras\n3. Sair\nSua escolha: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (q->next != NULL)
            {
                q = q->next;
                printf("\nPonteiro em %d\n", q->num);
            }
            else
            {
                printf("\nPonteiro no ultimo no %d. Nao pode avancar.\n", q->num);
            }
            break;
        case 2:
            while (p->next != q)
            {
                p = p->next;
            }
            if (p == q)
            {
                printf("\nPonteiro no primeiro no %d. Nao pode retroceder.\n", q->num);
            }
            else
            {
                q = p;
                p = head;
                printf("\nPonteiro em %d\n", q->num);
            }
            break;
        case 3:
            return;
        default:
            printf("\nOpcao invalida. Tente novamente\n");
        }
    } while (1);
}

void create57(struct node57 **head)
{
    int c, ch;
    struct node57 *temp, *rear;

    do
    {
        printf("Informe o numero: ");
        scanf("%d", &c);
        temp = (struct node57 *)malloc(sizeof(struct node57));
        temp->num = c;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Deseja continuar [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}

void display57(struct node57 *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->num);
        head = head->next;
    }
    printf("\n");
}

void release57(struct node57 **head)
{
    struct node57 *temp;
    while ((*head) != NULL)
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}

int assg5prog7()
{
    struct node57 *p = NULL, *q = NULL;
    int result, count;
    printf("Informe os dados para a lista\n");
    create57(&p);
    printf("Exibindo lista:\n");
    display57(p);
    move57(p);
    release57(&p);

    return 0;
}
