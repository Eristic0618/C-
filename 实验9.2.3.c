#include <stdio.h>
double f(double x, int n)
{
    if (n == 0)
        return 0;
    double num = 1.0;
    for (int j = 0; j < n; j++)
    {
        num *= x;
    }
    if ((n - 1) % 2 != 0)
        num *= -1;
    return f(x, n - 1) + num;
}

int main()
{
    double x, a;
    int n;
    scanf("%lf,%d", &x, &n);
    a = f(x, n);
    printf("a=%f\n", a);
    return 0;
}