#include <stdio.h>

int main()
{
    int x, y, z, t;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        t = x;
        x = y;
        y = t;
    } /*����x,y��ֵ*/
    if (x > z)
    {
        t = x;
        x = z;
        z = t;
    } /*����x,z��ֵ�����ڴ˴���д���д���*/
    if (y > z)
    {
        t = y;
        y = z;
        z = t;
    } /*����z,y��ֵ�����ڴ˴���д���д���*/
    printf("small to big: %d %d %d\n", x, y, z);
}