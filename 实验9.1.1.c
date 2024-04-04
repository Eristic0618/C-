#include <stdio.h>
#include <string.h>

void delchar(char *s, char c)
{
    int len = strlen(s);
    int i = 0;
    while (i < len)
    {
        if (s[i] == c)
        {
            int j;
            for (j = i + 1; j < len; j++)
            {
                s[j - 1] = s[j];
            }
            s[j - 1] = '\0';
        }
        else
            i++;
    }
}

int main()
{
    char s[1000];
    scanf("%s", s);
    getchar();
    char c;
    scanf("%c", &c);
    delchar(s, c);
    printf("After delete:\n");
    printf("%s", s);
    return 0;
}