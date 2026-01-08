#include <stdio.h>

void assg2prog4()
{
    int a[30], b[30], i, n, j, k, temp, c = 0;

    printf("Informe o tamanho do vetor (max 30): ");
    scanf("%d", &n);

    // Proteção simples para não estourar o limite do array
    if (n > 30)
    {
        printf("Erro: tamanho maximo e 30.\n");
        return;
    }

    printf("Digite os elementos do vetor: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0) // Verifica se é ímpar
            c++;
    }

    // Ordenação Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    k = 0;
    j = n - c;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (k < n - c)
                b[k++] = a[i];
        }
        else
        {
            if (j < n)
                b[j++] = a[i];
        }
    }

    printf("\nVetor apos ordenar os elementos pares e impares separadamente:\n");

    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
        printf("%d ", a[i]);
    }
    printf("\n");
}
