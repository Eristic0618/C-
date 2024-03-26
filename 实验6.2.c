#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    double *arr = (double *)malloc(sizeof(double) * n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%lf", arr + i);
    }
    double max = arr[0], min = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%.2lf", max - min);
    return 0;
}