#include <stdio.h>

int main()
{
	int n, status;
	printf("Enter the number\n");
	scanf("%d", &n);

	status = isprime(n);
	if (status == 0)
	{
		printf("%d is Prime\n", n);
	}
	else
	{
		printf("%d is Not Prime\n", n);
	}
	int isprime(int n);
	{
		int i, status = 0;
		for (i = 0; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				status = 1;
			}
		}
		return status;
	}
