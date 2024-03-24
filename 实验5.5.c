#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d,%d", &n, &m);
    for (int i = n-1; i > 0; --i)
    {
        int flag = 1;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d\n", i);
            --m;
        }
        if (m == 0)
            break;
    }
    return 0;
}