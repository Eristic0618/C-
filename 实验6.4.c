#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char in[60];
    fgets(in, sizeof(in), stdin);
    int n = strlen(in);
    char out[60];
    for (int i = 0; i <= n; ++i)
    {
        if (isupper(in[i]))
        {
            if (in[i] == 'X' || in[i] == 'Y' || in[i] == 'Z')
            {
                in[i] = 'A' + (2 - 'Z' + in[i]);
                out[i] = tolower(in[i]);
            }
            else
                out[i] = tolower(in[i] + 3);
        }
        else if (islower(in[i]))
        {
            if (in[i] == 'x' || in[i] == 'y' || in[i] == 'z')
            {
                in[i] = 'a' + (2 - 'z' + in[i]);
                out[i] = toupper(in[i]);
            }
            else
                out[i] = toupper(in[i] + 3);
        }
        else if (isdigit(in[i]))
        {
            if (in[i] - '0' >= 5)
                out[i] = '0' + (in[i] - '0' - 5);
            else
                out[i] = in[i] + 5;
        }
        else
            out[i] = in[i];
    }
    printf("%s", out);
    return 0;
}