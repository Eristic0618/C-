#include <stdio.h>

int fun(int a, int n)
{
    int ret = a;
    int tmp = a;
    for (int i = 1; i < n;++i)
    {
        a *= 10;
        tmp += a;
        ret += tmp;
    }
    return ret;
}

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int ret = fun(a, n);
    printf("s=%d", ret);
    return 0;
}