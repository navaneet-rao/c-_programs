// taylor Series

#include <stdio.h>
#include <math.h>
int main()
{
    float nume, denom, value = 0, term, degree, x;
    int n, i;
    printf("Enter the angle \n");
    scanf("%f", &degree);
    printf("Enter the numbers of terms \n");
    scanf("%d", &n);
    x = ((degree * 3.142) / 180);
    nume = x;
    denom = 1.0;
    term = nume / denom;
    for (i = 1; i <= n; i++)
    {
        value = value + term;
        nume = -nume * x * x;
        denom = denom * (2 * i) * (2 * i + 1);
        term = nume / denom;
    }
    printf("The calculated value of sin(%f) is %f \n", degree, value);
    printf("The calculated value of sin(%f) using builtin function is %f \n", degree, sin(x));
    return 0;
}