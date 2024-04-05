#include <stdio.h>
#include <string.h>
int findsubstring(char *s, char *sub)
{
    if(!strstr(s, sub))
        return -1;
    return strstr(s, sub) - s;
}
int main()
{
    char line[80], substr[10];
    int index;
    gets(line);
    gets(substr);
    index = findsubstring(line, substr);
    if (index >= 0)
        printf("index=%d\n", index);
    else
        printf("NOEXIST\n");
    return 0;
}