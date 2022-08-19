#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int a[MAX], top = -1, i, ele, temp;

void push()
{
  if (top == MAX - 1)
    printf("\n stack overflow!!!");
  else
  {
    printf("\n enter the element:");
    scanf("%d", &ele);
    a[++top] = ele;
  }
}
void pop()
{
  if (top == -1)
    printf(" \n stack underflow!!!");
  else
  {
    temp = a[top--];
    printf("\n deleted element is: %d ", temp);
  }
}
void display()
{
  if (top == MAX - 1)
    printf("\n stack overflow!!!");
  else if (top == -1)
    printf(" \n stack underflow!!!");
  else
  {
    printf("\n stack is:");
    for (i = top; i >= 0; i--)
      printf("\n %d", a[i]);
  }
}
void palindrome()
{
  int cnt = 0;
  for (i = 0; i <= top / 2; i++)
  {
    if (a[i] == a[top - i])
      cnt++;
  }

  if ((top / 2 + 1) == cnt)
    printf("\n stack is palindrome");
  else
    printf("\n stack is not palindrome");
}
void main()
{
  int ch;
  do
  {
    printf("\n 1:push\n2.pop\n3. display\n4.palindrome\n5.exit\n enter choice:");
    scanf("%d", &ch);
    switch (ch)

    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      palindrome();
      break;
    case 5:
      exit(0);
      break;
    default:
      printf("wrong option!!!");
      break;
    }
  } while (ch != 5);
}
