#include <stdio.h>
#include <stdlib.h>

/*
 * Uma matriz m x n que possui relativamente poucas entradas não nulas (diferentes de zero)
 * é chamada de matriz esparsa. Ela pode ser representada ocupando muito menos espaço
 * do que m x n. Uma matriz m x n com k entradas não nulas é esparsa se k << m x n.
 * Pode ser mais rápido representar a matriz de forma compacta como uma lista dos
 * índices não nulos e seus valores associados.
 * Escreva um programa (WAP) para representar uma matriz esparsa usando lista encadeada.
 */

struct node93
{
    int r, c, v;
    struct node93 *next;
};

void print(struct node93 *h)
{
    struct node93 *ptr;
    for (ptr = h; ptr != NULL; ptr = ptr->next)
    {
        printf("%d %d %d \n", ptr->r, ptr->c, ptr->v);
    }
}

void create(struct node93 **h)
{
    struct node93 *ptr, *cur;
    *h = malloc(sizeof(struct node93));
    (*h)->next = NULL;
    printf("Informe o numero de linhas, colunas e elementos nao-zero:\n");
    scanf("%d%d%d", &(*h)->r, &(*h)->c, &(*h)->v);
    ptr = *h;
    for (int i = 0; i < (*h)->v; i++)
    {
        cur = malloc(sizeof(struct node93));
        cur->next = NULL;
        scanf("%d%d%d", &cur->r, &cur->c, &cur->v);
        ptr->next = cur;
        ptr = cur;
    }
}

int assg9prog3()
{
    struct node93 *A, *B, *C;
    A = B = C = NULL;
    create(&A);
    printf("A:\n");
    print(A);

    return 0;
}
