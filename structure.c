// structure for marks

#include <stdio.h>

struct student
{
    char name[100];
    float sub1, sub2, sub3;
    float total, avg;
};

int main()
{
    struct student s[100];
    float classavg, totalavg = 0;
    int n, i;

    printf("Enter the total number of students: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the students: \n");
        scanf("%s", s[i].name);

        printf("Enter the marks in 3 subjects: \n");
        scanf("%f%f%f", &s[i].sub1, &s[i].sub2, &s[i].sub3);

        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].avg = s[i].total / 3;
        totalavg = totalavg + s[i].avg;
    }

    classavg = totalavg / n;
    printf("------------------------------------------------------------\n");
    printf("\t The class average is %f \n", classavg);
    printf("------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("Total marks scored by %s in %f \n", s[i].name, s[i].total);
        printf("Average marks scored by %s in %f \n", s[i].name, s[i].avg);
        if (s[i].avg >= classavg)
        {
            printf("%s has scored above average \n", s[i].name);
            printf("------------------------------------------------------------\n");
        }
        else
        {
            printf("%s has scored below average \n", s[i].name);
            printf("------------------------------------------------------------\n");
        }
    }

    return 0;
}