#include <stdio.h>
void main()
{

  int i, j, n, a[10], temp = 0;

  printf("enter the number");
  scanf("%d", &n);

  printf("enter the elements");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - j - 1; j++)
    {
      if (a[i] > a[j + 1])
      {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d\n", a[i]);
  }
}
