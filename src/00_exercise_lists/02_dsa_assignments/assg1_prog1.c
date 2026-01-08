// Q1: Programa em C para encontrar o menor e o maior elemento em um vetor

int assg1prog1()
{
    int a[10], i, n, large, small;
    printf("\nInforme a quantidade de elementos: ");
    scanf("%d", &n);
    printf("\nDigite os elementos do vetor: ");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    large = small = a[0];

    for (i = 1; i < n; ++i)
    {
        if (a[i] > large)
            large = a[i];

        if (a[i] < small)
            small = a[i];
    }

    printf("\nO menor elemento e %d\n", small);
    printf("\nO maior elemento e %d\n", large);

    return 0;
}
