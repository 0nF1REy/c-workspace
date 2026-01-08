#include <stdio.h>

int assg2prog6()
{

    int size, i, largest;

    printf("\n Informe o tamanho do vetor: ");
    scanf("%d", &size);
    int arr[size];

    printf("\n Digite %d elementos do vetor: \n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < size; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }

    printf("\n Maior elemento presente no vetor: %d\n", largest);
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == largest)
        {
            c++;
        }
    }
    printf("\nOcorrencias do maior elemento: %d", c);

    return 0;
}
