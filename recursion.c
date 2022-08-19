#include <stdio.h>
int bintodec(long int binary)
{
  if (binary == 0)
  {
    return 0;
  }
  else
  {
    return (binary % 10 + 2 * bintodec(binary / 10));
  }
}
void main()
{
  long int binary, decimal;

  printf("enter the binary number to the converted:");

  scanf("%ld", &binary);

  decimal = bintodec(binary);

  printf("decimal of %ld is: %ld\n\n", binary, decimal);
}
