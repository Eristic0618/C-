#include <stdio.h>

int main()
{
    int count = 0;
    int sum = 0;
    for (int i = 1; i <= 200; ++i)
    {
        if (i % 2 == 0 && (i % 7 == 0 || i % 17 == 0))
        {
            sum += i;
            printf("%6d", i);
            count++;
            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\nsum=%d", sum);
    return 0;
}