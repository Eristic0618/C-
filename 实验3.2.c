#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1;
    double x2, y2;
    double x3, y3;
    scanf("%lf,%lf", &x1, &y1);
    scanf("%lf,%lf", &x2, &y2);
    scanf("%lf,%lf", &x3, &y3);
    double l1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double l2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double l3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    if((l1+l2)>l3 && (l2+l3)>l1 && (l3+l1)>l2)
    {
        double p = (l1 + l2 + l3) / 2;
        double area = sqrt(p * (p - l1) * (p - l2) * (p - l3));
        printf("primeter=%.2lf,area=%.2lf", l1 + l2 + l3,area);
    }
    else
    {
        printf("Impossible");
    }


    return 0;
}