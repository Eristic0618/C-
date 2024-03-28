#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", arr + i);
    }
    int pos = -1;
    int countbig = 0;
    int countsmall = 0;
    int a = 0;
    scanf("%d", &a);
    for (int i = 0; i < n; ++i)
    {
        if (a == arr[i])
            pos = i;
        if (arr[i] > a)
            countbig++;
        if (arr[i] < a)
            countsmall++;
    }
    printf("%d\n%d\n%d\n", pos, countbig, countsmall);
    return 0;
}