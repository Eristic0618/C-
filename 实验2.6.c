#include <stdio.h>
#include <math.h>

int main()
{
    double x0, y0, A, B, C;
    scanf("%lf%lf", &x0, &y0); // �����P������
    scanf("%lf%lf%lf", &A, &B, &C); // ����ֱ��L��A��B��C
    printf("%f",(fabs(A*x0+B*y0+C)/sqrt(A*A+B*B))); // �������
    return 0;
}

