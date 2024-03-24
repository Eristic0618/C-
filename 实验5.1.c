#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; ++i)
    {
        for (int j = 1; j <= 33; ++j)
        {
            if ((5 * i + 3 * j + (100 - i - j) / 3.0) == 100)
                printf("%5d%5d%5d\n", i, j, 100 - i - j);
        }
    }
    return 0;
}