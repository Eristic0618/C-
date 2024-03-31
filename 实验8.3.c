#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    int ret = 0;
    for (int i = m; i <= n; ++i)
    {
        ret += fib(i);
    }
    printf("sum=%d", ret);
    return 0;
}