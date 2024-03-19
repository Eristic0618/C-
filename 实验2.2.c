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
    } /*交换x,y的值*/
    if (x > z)
    {
        t = x;
        x = z;
        z = t;
    } /*交换x,z的值，请在此处填写多行代码*/
    if (y > z)
    {
        t = y;
        y = z;
        z = t;
    } /*交换z,y的值，请在此处填写多行代码*/
    printf("small to big: %d %d %d\n", x, y, z);
}