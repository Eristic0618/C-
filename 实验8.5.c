#include <stdio.h>

int prime(int m)
{
    if (m == 1)
        return 0;
    int flag = 1;
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
            flag = 0;
    }
    return flag;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i <= n + 10; i++)
    {
        if (i % 2 == 0)
        {
            int flag = 0;
            for (int j = 2; j < i; j++)
            {
                int sum = 0;
                if (prime(j))
                {
                    sum += j;
                    for (int k = i - j; k > 2; k--)
                    {
                        if (prime(k))
                        {
                            sum += k;
                            if (sum == i)
                            {
                                printf("%d=%d+%d\n", i, j, k);
                                flag = 1;
                            }
                        }
                        if (flag == 1)
                            break;
                    }
                }
                if (flag == 1)
                    break;
            }
        }
    }
    return 0;
}