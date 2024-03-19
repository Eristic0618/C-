#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 13 - i; ++j)
        {
            printf(" ");
        }
        for (int j = 0; j < count; ++j)
        {
            printf("*");
        }
        for (int j = 0; j < 13 - i; ++j)
        {
            printf(" ");
        }
        printf("\n");
        count += 2;
    }
    return 0;
}