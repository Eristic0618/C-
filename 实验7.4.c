#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[80];
    fgets(str, sizeof(str), stdin);
    int hash[26] = {0};
    int n = strlen(str);
    for (int i = 0; i < n; ++i)
    {
        if (islower(str[i]))
            hash[str[i] - 97]++;
        if (isupper(str[i]))
            hash[str[i] - 65]++;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (hash[i] != 0)
        {
            printf("%c is %d\n", i + 97, hash[i]);
        }
    }
    return 0;
}