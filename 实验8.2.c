#include <stdio.h>

int sum(int start, int count)
{
    int sum = 0;
    for (int i = 0; i < count; ++i)
    {
        sum += start;
        start++;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int start = 1;
    int count = 2;
    int ret = 0;
    for (int i = 0; i < n; ++i)
    {
        ret += sum(start, count);
        start++;
        count++;
    }
    printf("sum=%d", ret);
    return 0;
}