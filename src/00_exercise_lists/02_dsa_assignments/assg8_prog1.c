#include <stdio.h>

int assg8prog1()
{
    int a[50], i, n, x;
    printf("\nInforme o numero de elementos: ");
    scanf("%d", &n);
    printf("\nInforme os elementos do vetor: ");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("informe o elemento a ser buscado:");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d encontrado na posicao %d", x, i + 1);
        }
    }
    return 0;
}
