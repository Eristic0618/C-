#include <stdio.h>

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);
    int flag = 0;
    int up, down, high = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &up, &down);
        high += up;
        if (high >= k)
        {
            flag = 1;
            break;
        }
        high -= down;
        if (high < 0)
            high = 0;
    }
    if (flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}