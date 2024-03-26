#include <stdio.h>

int main()
{
    int flag = 0;
    for (int a = 1; a <= 4; ++a)
    {
        for (int b = 1; b <= 4; ++b)
        {
            if (a == b)
                continue;
            for (int c = 1; c <= 4; ++c)
            {
                if (a == c || b == c)
                    continue;
                for (int d = 1; d <= 4; ++d)
                {
                    if (a == d || b == d || c == d)
                        continue;
                    if ((((c == 1) && !(a == 3)) || (!(c == 1) && (a == 3))) && (((b == 1) && !(d == 4)) || (!(b == 1) && (d == 4))) && (((d == 2) && !(c == 3)) || (!(d == 2) && (c == 3))))
                        flag = 1;
                    if (flag == 1)
                    {
                        printf("abcd\n");
                        printf("%d%d%d%d", a, b, c, d);
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
            break;
    }
    return 0;
}