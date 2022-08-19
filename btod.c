#include <stdio.h>
int bintodec(long int binary)
{
	if (binary == 0)
	{
		return 0;
	}
	else
	{
		// Conversion to decimal
		return (binary % 10 + 2 * bintodec(binary / 10));
	}
}

int main()
{
	long int binary, decimal;
	printf("\nEnter the binary number to be converted:");
	scanf("%ld", &binary);
	decimal = bintodec(binary);
	printf("The %ld is binary decimal is %ld", binary, decimal);
}
