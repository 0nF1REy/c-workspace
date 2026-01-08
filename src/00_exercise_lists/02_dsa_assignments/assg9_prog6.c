#include <stdio.h>

// Programa para determinar se a matriz dada e triangular inferior, triangular superior ou tri-diagonal.

int assg9prog6()
{
	int n;
	printf("Informe o tamanho da matriz:");
	scanf("%d", &n);
	int flag1 = 0, flag2 = 0, flag3 = 0;
	int mat[n][n];
	int i, j;
	printf("Informe os elementos:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (mat[i][j] != 0)
			{
				flag1 = 0;
			}
			else
			{
				flag1 = 1;
			}
		}
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (mat[i][j] != 0)
			{
				flag2 = 0;
			}
			else
			{
				flag2 = 1;
			}
		}
	}

	if (flag1 == 1)
		printf("Matriz Triangular Superior");
	else if (flag2 == 1)
		printf("Matriz Triangular Inferior");
	else
		printf("Matriz tri-diagonal");

	return 0;
}
