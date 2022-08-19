#include <stdio.h>
#include <string.h>

int length(char s1[100], char s2[100]);
int compare(char s1[100], char s2[100]);
int concate(char s1[100], char s2[100]);

int main()
{
    char a[100], b[100];
    printf("Enter the first string \n");
    scanf("%s", a);
    printf("Enter the second string \n");
    scanf("%s", b);
    length(a, b);
    compare(a, b);
    concate(a, b);
    return 0;
}

int length(char s1[100], char s2[100])
{

    printf("The length of thr first string is %d \n", strlen(s1));
    printf("The length of thr second string is %d \n", strlen(s2));
    return 0;
}

int compare(char s1[100], char s2[100])
{
    if (strcmp(s1, s2) == 0)
    {
        printf("Strings are equal \n");
    }
    else
    {
        printf("Strings are not equal \n");
    }
    return 0;
}

int concate(char s1[100], char s2[100])
{
    printf("The Concatenation of 2 strings is %s \n", strcat(s1, s2));
}
