// pointer

#include <stdio.h>
#include <math.h>
int main()
{
    float a[90], sum, mean, stddev, variable, sumstd, *ptr;
    int n, i;
    printf("Enter the array size \n");
    scanf("%d", &n);
    printf("Enter the array elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    sum = 0;
    sumstd = 0;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for (i = 0; i < n; i++)
    {
        sumstd = sumstd + pow((*ptr - mean), 2);
        ptr++;
    }
    variable = sumstd / n;
    stddev = sqrt(variable);
    printf("sum is %f \n", sum);
    printf("mean is %f \n", mean);
    printf("standard deviation is %f \n", stddev);
    return 0;
}
