#include <stdio.h>

int main()
{
    int a[20] = {81, 55, 102, 84, 204, 105, 56, 85, 58, 202, 101, 83, 104, 103, 82, 201, 59, 203, 57, 205};
    int sz = sizeof(a) / sizeof(a[0]);
    int count = 0;
    for (int i = 0; i < sz; ++i)
    {
        if (a[i] < 60)
            a[i] = -1;
        if (a[i] > 100 && a[i] <= 200)
            a[i] = -2;
        if (a[i] > 200)
            a[i] = -3;
    }
    for (int i = 0; i < sz; ++i)
    {
        printf("%5d", a[i]);
        count++;
        if (count % 5 == 0)
            printf("\n");
    }
    return 0;
}