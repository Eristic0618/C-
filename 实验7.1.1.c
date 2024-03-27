#include <stdio.h>

int main()
{
    double arr[20] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", arr + i);
    }
    int pos = 0;
    double max = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > max)
        {
            pos = i;
            max = arr[i];
        }
    }
    double temp = arr[0];
    arr[0] = arr[pos];
    arr[pos] = temp;
    for (int i = 0; i < n; ++i)
    {
        printf("%lf  ", arr[i]);
    }
    return 0;
}