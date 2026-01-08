#include <stdio.h>

int assg2prog8()
{
    int n, i;
    printf("Informe a quantidade de elementos a adicionar:\t");
    scanf("%d", &n);
    int arr[n];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    int lower, upper;
    printf("Informe o limite inferior e superior (ambos inclusivos):\t");
    scanf("%d%d", &lower, &upper);
    int count = 0;
    for (i = 0; i < n; i++)
    {

        if (arr[i] >= lower && arr[i] <= upper)
        {
            count++;
        }
    }
    printf("Existem %d elementos entre %d e %d no vetor.\n", count, lower, upper);

    return 0;
}
