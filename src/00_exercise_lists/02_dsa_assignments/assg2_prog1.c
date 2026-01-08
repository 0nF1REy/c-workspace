// Programa para ordenar um vetor de n numeros

#include <stdio.h>

int assg2prog1()
{

    int i, j, a, n, number[30];
    printf("Informe o valor de N \n");
    scanf("%d", &n);

    printf("Digite os numeros \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    for (i = 0; i < n; ++i)
    {

        for (j = i + 1; j < n; ++j)
        {

            if (number[i] > number[j])
            {

                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("Os numeros em ordem crescente sao:\n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
    return 0;
}
