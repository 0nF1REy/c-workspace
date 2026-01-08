#include <stdio.h>

int assg2prog2()
{
    int no, i;
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &no);
    int array[no];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < no; i++)
    {
        scanf("%d", &array[i]);
    }
    int lower, upper;
    printf("Informe o indice inicial e final (inclusive): ");
    scanf("%d%d", &lower, &upper);
    int count = 0;
    for (i = 0; i < no; i++)
    {
        if (i >= lower && i <= upper)
        {
            count++;
        }
    }
    printf("O numero de elementos entre os indices %d e %d e: %d\n", lower, upper, count);
}
