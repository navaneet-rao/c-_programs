#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, n, a[100], low, high, mid, search;
	printf("Enter the size of the array\n");
	scanf("%d", &n);

	printf("Enter the array elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the elment to be searched\n");
	scanf("%d", &search);

	low = 0;
	high = n;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid == search)
		{
			printf("The element %d is found at %d\n", search, mid);
			exit(0);
		}
		else if (mid < search)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	printf("The Element not found");
}
