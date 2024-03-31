#include <stdio.h>
#include <stdlib.h>

int prime(int m)
{
    if(m == 1)
        return 0;
    int flag = 1;
    for (int i = 2; i < m;i++)
    {
        if(m % i == 0)
            flag = 0;
    }
    return flag;
}

int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    int count = 0, sum = 0;
    for (int i = m; i <= n;i++)
    {
        if(prime(i))
        {
            count++;
            sum += i;
        }
    }
    printf("count=%d,sum=%d", count, sum);
    return 0;
}