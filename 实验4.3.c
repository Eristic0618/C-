#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d,%d", &n1, &n2);
    int div = 0;
    int mul = 0;
    int min = n1;
    if (n1 > n2)
    {
        min = n2;
    }
    for (int i = 1; i <= min; i++)
    {
        if(n1 % i == 0 && n2 % i == 0 && i > div)
            div = i;
    }
    int count = min;
    while(count++)
    {
        if(count % n1 == 0 && count % n2 == 0)
        {
            mul = count;
            break;
        }
    }
    printf("gys=%d,gbs=%d", div, mul);
}