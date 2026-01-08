#include <stdio.h>

int binarySearch85(int arr[], int right, int left, int ele)
{

    if (right >= left)
    {
        int mid = left + ((right - left) / 2);

        if (arr[mid] == ele)
            return 1;

        if (arr[mid] > ele)
            return binarySearch85(arr, left, mid - 1, ele);

        return binarySearch85(arr, mid + 1, right, ele);
    }
    return 0;
}

int assg8prog6()
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

    if (binarySearch85(arr, n - 1, 0, eleF))
    {
        printf("Elemento Encontrado\n");
    }
    else
        printf("Elemento nao existe\n");
        
    return 0;
}
