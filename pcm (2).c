#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m1[20][20], m2[20][20], m3[20][20], m, n, p, q, i, j, k;

	printf("\nEnter order of Matrix 1: ");
	scanf("%d%d", &m, &n);
	printf("Enter order of Matrix 2: ");
	scanf("%d%d", &p, &q);

	if (n == p)
	{
		printf("\nEnter the element of matrix: 1\n");
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				scanf("%d", &m2[i][j]);
			}
		}

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				m3[i][j] = 0;

				for (k = 0; k < n; k++)
				{
					m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
				}
			}
		}

		printf("\nproduce of matricesare:\n");

		for (i = 0; i < m; i++)
		{
			printf("%d\t", m3[i][j]);
		}
		printf("\n");
	}
	else
	{
		printf("\nMatrices are incompatible!,try agin.\n\n");
		exit(0);
	}
}
