#include <stdio.h>

int even(int x)
{
    if (x < 0)
        x *= -1;
    if (x % 2 == 1)
        return 1;
    return 0;
}

int main()
{
    int n, m;
    int sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = n; i <= m; i++)
    {
        if (even(i))
            sum += i;
    }
    printf("%d", sum);
    return 0;
}