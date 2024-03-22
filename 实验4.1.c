#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        count++;
        count *= 2;
    }
    printf("Totals=%d", count);
    return 0;
}