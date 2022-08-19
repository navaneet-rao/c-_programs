#include <stdio.h>

int btd(long int bin)
{

    if (bin == 0)
    {
        return 0;
    }
    else
    {
        return ((bin % 10) + (2 * btd(bin / 10)));
    }
}
int main()
{
    long int bin, dec;
    printf("enter the binary number to be converted:");
    scanf("%d", &bin);
    dec = btd(bin);
    printf("the decimal number of the given binary value %ld is %ld\n", bin, dec);
}
