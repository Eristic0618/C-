#include <stdio.h>

int main()
{
    int y1, y2;
    scanf("[%d,%d]", &y1, &y2);
    int count = 0;
    for (int i = y1; i <= y2; ++i)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            count++;
    }
    printf("years=%d", count);
}