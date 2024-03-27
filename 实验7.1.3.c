#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int **arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; ++i)
    {
        arr[i] = (int *)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", arr[i] + j);
        }
    }
    int i;
    for (i = 0; i < n; ++i)
    {
        int pos = 0;
        int row = i;
        int max = arr[i][0];
        for (int j = 1; j < n; ++j)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                pos = j;
            }
        }
        int min = max;
        for (int j = 0; j < n; ++j)
        {
            if (arr[j][pos] < min)
            {
                min = arr[j][pos];
                break;
            }
        }
        if (min == max)
        {
            printf("a(%d,%d)=%d", row, pos, max);
            break;
        }
    }
    if (i == n)
        printf("NO");
    return 0;
}