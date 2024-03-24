#include <stdio.h>

int main()
{
    for (int i = 1; i <= 7; ++i)
    {
        int line = i - 1;
        for (int j = 0; j < 31 - i; ++j)
        {
            printf(" ");
        }
        for (int k = 0; k < line * 2 + 1; ++k)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for(int i = 6; i >=1; --i)
    {
        int line = i - 1;
        for (int j = 0; j < 31 - i; ++j)
        {
            printf(" ");
        }
        for (int k = 0; k < line * 2 + 1; ++k)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}