#include <stdio.h>

int area(int n)
{
    if (n == 1)
        return 2;
    return area(n - 1) + 2 * (n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ret = area(n);
    printf("%d", ret);
    return 0;
}