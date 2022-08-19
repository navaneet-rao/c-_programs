#include <stdio.h>
int main()
{
   int a[100], temp, i, j, n;
   printf("Enter the array size \n ");
   scanf("%d", &n);
   printf("Enter The arrary elements \n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (i = 1; i < n; i++)
   {
      for (j = 0; j < n - 1; j++)
      {
         if (a[j] > a[j + 1])
         {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
   }
   for (i = 0; i < n; i++)
   {
      printf("%d \t", a[i]);
   }
   return 0;
}