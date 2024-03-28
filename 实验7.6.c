#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, s1[10] = {10, 21, 34, 12, 15, 8, 17, 20, 23, 30}, s2[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &s2[i]);
    for (i = 0; i < n; i++)
    for (j = 0; j < sizeof(s1) / sizeof(s1[0]); j++)
    {
        for (i = 0; i < n; i++)
        {
            if (s2[i] == s1[j])
            {
                printf("%5d", s1[j]);
                while (i < n)
                {
                    s2[i] = s2[i + 1];
                    i++;
                }
                break;
            }
        }
    }
    return 0;
}