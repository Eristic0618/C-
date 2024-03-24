#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d,%d", &a, &n);
    int sum = a;
    int tmp = a;
    printf("%d", a);
    for (int i = 1; i < n; ++i)
    {
        a *= 10;
        tmp += a;
        sum += tmp;
        printf("+%d", tmp);
    }
    printf("=%d", sum);
    return 0;
}