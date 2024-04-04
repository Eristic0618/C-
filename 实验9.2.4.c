#include <stdio.h>
double power(double x, int n)
{
    if(n == 0)
        return 1;
    return power(x, n - 1) * x;
}

int main()
{
    double x, a;
    int n;
    scanf("%lf,%d", &x, &n);
    a = power(x, n);
    printf("a=%f\n", a);
    return 0;
}