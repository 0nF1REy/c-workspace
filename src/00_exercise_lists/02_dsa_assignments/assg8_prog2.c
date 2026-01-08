#include <stdio.h>

int assg8prog2()
{
    int i, lb, ub, middle, n, search, ar[100], j, a;

    printf("Informe o numero de elementos :: ");
    scanf("%d", &n);
    printf("\nInforme %d inteiros :: \n", n);

    for (i = 0; i < n; i++)
    {
        printf("\nInforme o valor %d :: ", i + 1);
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (ar[i] > ar[j])
            {
                a = ar[i];
                ar[i] = ar[j];
                ar[j] = a;
            }
        }
    }

    printf("Os numeros organizados em ordem crescente:\n");

    for (i = 0; i < n; ++i)
        printf("%d\n", ar[i]);
    printf("\nInforme o valor a buscar :: ");
    scanf("%d", &search);
    lb = 0;
    ub = n - 1;
    middle = (lb + ub) / 2;

    while (lb <= ub)
    {
        if (ar[middle] < search)
            lb = middle + 1;
        else if (ar[middle] == search)
        {
            printf("\n %d encontrado na localizacao %d.\n", search, middle + 1);
            break;
        }
        else
            ub = middle - 1;
        middle = (lb + ub) / 2;
    }
    if (lb > ub)
        printf("Nao encontrado! %d nao esta presente na lista.\n", search);

    return 0;
}
