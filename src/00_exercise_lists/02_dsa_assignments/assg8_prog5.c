#include <stdio.h>

int linearSearch85(int arr[], int s, int n, int ele)
{
    if (s >= n)
    {
        return 0;
    }

    else if (arr[s] == ele)
    {

        return 1;
    }

    else
    {
        return linearSearch85(arr, s + 1, n, ele);
    }
    return 0;
}

int assg8prog5()
{
    int n;
    printf("Informe o valor de n\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int eleF;
    printf("Informe o elemento a ser encontrado\n");
    scanf(" %d", &eleF);

    if (linearSearch85(arr, 0, n, eleF))
    {
        printf("Elemento Encontrado\n");
    }
    else
        printf("Elemento nao existe\n");
        
    return 0;
}
