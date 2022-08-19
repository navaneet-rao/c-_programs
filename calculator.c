// simple calculator
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a, b, res;
  char op;
  printf("Enter the element in a+b form \n");
  scanf("%d%c%d", &a, &op, &b);
  // logic calculation
  switch (op)
  {
  case '+':
    res = a + b;
    break;

  case '-':
    res = a - b;
    break;

  case '*':
    res = a * b;
    break;

  case '/':
    res = a / b;
    break;

  case '%':
    res = a % b;
    break;

  default:
    printf("invalid\n");
    exit(0);
    break;
  }
  printf("result of %d%c%d=%d \n", a, op, b, res);
  return 0;
}