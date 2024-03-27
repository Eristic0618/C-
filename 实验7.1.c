#include <stdio.h>

int main()
{
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = 10;
    int x1, n1, n2;
    scanf("%d %d %d", &x1, &n1, &n2);
    for (int i = 0; i < n; ++i)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    if (n1 >= 0 && n1 <= n)
    {
        for (int i = n; i > n1; --i)
        {
            a[i] = a[i - 1];
        }
        a[n1] = x1;
    }
    else
    {
        a[n] = x1;
    }
    n++;
    for (int i = 0; i < n; ++i)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    if (n2 < 0 || n2 >= n)
    {
        n2 = 0;
    }
    for (int i = n2; i < n; ++i)
    {
        a[i] = a[i + 1];
    }
    n--;
    for (int i = 0; i < n; ++i)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}