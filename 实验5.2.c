#include <stdio.h>

int main()
{
    int count = 0;
    int sum;
    scanf("%d", &sum);
    for (int i = 1; i <= sum-7; ++i)
    {
        int tmp1 = sum;
        tmp1 -= i;
        for (int j = 1; j < tmp1 / 2; ++j)
        {
            if ((i + j * 2) > sum - 5)
                break;
            int tmp2 = tmp1;
            tmp2 -= 2 * j;
            if (tmp2 % 5 == 0)
                count++;
        }
    }
    printf("count=%d", count);
    return 0;
}