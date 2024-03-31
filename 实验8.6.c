#include <stdio.h>

int countdigit(int number, int digit)
{
    int count = 0;
    while(number)
    {
        int num = number % 10;
        if(num == digit)
            count++;
        number /= 10;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("count=%d", countdigit(n, 2));
    return 0;
}