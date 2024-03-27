#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[8] = {' ', '1', 'l', 'e', 'v', 'e', 'l', '1'};
    int n, m;
    scanf("%d %d", &n, &m);
    int *hash = (int *)malloc(sizeof(int) * (n + 1));
    memset(hash, 0, sizeof(int) * (n + 1));
    int count = 0;
    int num = 0;
    while (count < 7)
    {
        count++;
        num += m;
        if (num > n)
            num -= n;
        hash[num] = count;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] != 0)
            printf("%d %c\n", i, str[hash[i]]);
    }
    return 0;
}