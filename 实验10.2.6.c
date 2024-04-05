#include "stdio.h"
#define N 10
void cycle(int *p, int n, int count)
{
    if (count > n)
        count %= n;
    if (count < 0)
        count = N + count % 10;
    for (int i = 0; i < count; i++)
    {
        int temp = p[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            p[j] = p[j - 1];
        }
        p[0] = temp;
    }
}

int main()
{
    int i, n, a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    scanf("%d", &n);
    printf("Before:\n");
    for (i = 0; i < N; i++)
        printf("%4d", a[i]);
    cycle(a, sizeof(a) / sizeof(a[0]), n);
    printf("\nAfter:\n");
    for (i = 0; i < N; i++)
        printf("%4d", a[i]);
    printf("\n");
    return 0;
}