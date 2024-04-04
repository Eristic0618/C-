#include <stdio.h>
void splitfloat(double x, int *intpart, double *fracpart);

int main()
{
    double a, fracpart;
    int intpart;
    scanf("%lf", &a);
    splitfloat(a, &intpart, &fracpart);
    printf("INT:%d\nFRAC:%lf\n", intpart, fracpart);
    return 0;
}

void splitfloat(double x, int *intpart, double *fracpart)
{
    double i = 0;
    while (i < x - 1)
    {
        i++;
    }
    *intpart = i;
    *fracpart = x - i;
    if ((*fracpart) == 1.0)
    {
        (*intpart)++;
        (*fracpart)--;
    }
}