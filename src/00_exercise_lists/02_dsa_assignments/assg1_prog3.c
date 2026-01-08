// Q3: Programa para buscar um elemento em um vetor de n numeros.

void assg1prog3()
{
    int a[10], i, x, n;
    int found = 0;
    printf("\nInforme a quantidade de elementos: ");
    scanf("%d", &n);
    printf("\nDigite os elementos do vetor: ");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("Numero que deseja buscar: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf(" %d esta presente no indice %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("O numero %d nao esta presente no vetor\n", x);
    }
}
