#include <stdio.h>

struct time
{
    int _h;
    int _m;
    int _s;
};

int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    struct time t;
    t._h = h;
    t._m = m;
    t._s = s;
    int n;
    scanf("%d", &n);
    t._s += n;
    t._m += t._s / 60;
    t._s %= 60;
    t._h += t._m / 60;
    t._m %= 60;
    t._h %= 24;
    printf("After %d seconds is %d:%d:%d", n, t._h, t._m, t._s);
    return 0;
}