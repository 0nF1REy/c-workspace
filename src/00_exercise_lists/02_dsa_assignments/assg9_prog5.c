#include <stdio.h>

int assg9prog5()
{
    int rows, cols, size, count = 0;

    // Inicializa matriz a
    int a[][3] = {
        {4, 0, 0},
        {0, 5, 0},
        {0, 0, 6}};

    // Calcula numero de linhas e colunas presentes na matriz dada
    rows = (sizeof(a) / sizeof(a[0]));
    cols = (sizeof(a) / sizeof(a[0][0])) / rows;

    // Calcula o tamanho do array
    size = rows * cols;

    // Conta todos os elementos zero presentes na matriz
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] == 0)
                count++;
        }
    }

    if (count > (size / 2))
        printf("A matriz dada e uma matriz esparsa");
    else
        printf("A matriz dada nao e uma matriz esparsa");

    return 0;
}
