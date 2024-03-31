#include <stdio.h>
#include <math.h>

int is(int number)
{
    int sum = 0;
    int num = number;
    while (num)
    {  
        sum += pow(num % 10, 3);
        num /= 10;
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

int main()
{
    printf("Input m and n: ");
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (is(i))
            printf("%d\n", i);
    }
    return 0;
}