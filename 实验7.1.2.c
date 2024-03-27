#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    int prev = 0;
    int cur = 1;
    for (int i = 1; i < n; ++i)
    {
        if (str[prev] == '#' && str[cur] == '#')
            break;
        prev++;
        cur++;
    }
    int count = 0;
    for (int i = 0; i < cur; ++i)
    {
        if(isdigit(str[i]))
            count++;
    }
    printf("sum=%d", count);
    return 0;
}