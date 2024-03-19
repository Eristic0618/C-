#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    if (x <= (float)100)
    {
        printf("%.2f", 0.51 * x);
    }
    else
    {
        printf("%.2f", 0.65 * x);
    }
    return 0;
}