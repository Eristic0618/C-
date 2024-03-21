#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("A");
    }
    else if (n % 3 == 0 && n % 5 != 0)
    {
        printf("B");
    }
    else if (n % 3 != 0 && n % 5 == 0)
    {
        printf("C");
    }
    else if (n % 3 != 0 && n % 5 != 0)
    {
        printf("D");
    }
    return 0;
}