#include <stdio.h>
#include <stdlib.h>

int assg2prog9()
{
    int *a, i, j, n, k, t;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    
    a = (int *)malloc(n * sizeof(int));
    printf("Digite os elementos do vetor: ");

    for (i = 0; i < n; i++)
        scanf("%d", a + i);
    printf("Informe o valor de k: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i] < a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }

    printf("%d-esimo Menor Elemento: %d", k, a[k - 1]);
    printf("\n%d-esimo Maior Elemento: %d", k, a[n - k]);
    
    return 0;
}
