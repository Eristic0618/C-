#include <stdio.h>
#include <math.h>
#define N 10

void cycle(int s[], int n, int count); // n表示数组长度，count表示移动的位置数

int main()
{
    int i, n, s[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    scanf("%d", &n);
    printf("Before:\n");
    for (i = 0; i < N; i++)
        printf("%4d", s[i]);
    cycle(s, sizeof(s) / sizeof(s[0]), n);
    printf("\nAfter:\n");
    for (i = 0; i < N; i++)
        printf("%4d", s[i]);
    printf("\n");
    return 0;
}

void cycle(int s[], int n, int count)
{
    if (count > n)
        count %= n;
    if (count < 0)
        count = N + count % 10;
    for (int i = 0; i < count; i++)
    {
        int temp = s[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            s[j] = s[j - 1];
        }
        s[0] = temp;
    }
}