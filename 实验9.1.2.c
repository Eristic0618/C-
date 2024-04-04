#include <stdio.h>

void dectobin(int num)
{
    if(num == 0)
        return;
    dectobin(num / 2);
    printf("%d", num % 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    dectobin(n);
    return 0;
}