#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    if (x < 1.0)
    {
        printf("y=%.2lf", x);
    }
    else if (1.0 <= x && x < 10)
    {
        printf("y=%.2lf", x - 1.0);
    }
    else if (x >= 10.0)
    {
        printf("y=%.2lf", (3 * x) - 11.0);
    }
    return 0;
}