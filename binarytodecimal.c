#include <stdio.h>
void main()

{
    int dec = 0, rem, n, i, base = 1;

    printf("Enter the binary value: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;

        dec = dec + rem * base;
        base = base * 2;
    }

    printf("The decimal value: %d\n", dec);
}
