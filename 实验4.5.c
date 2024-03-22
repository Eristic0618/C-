#include <stdio.h>
#include <math.h>

double fact(int n)
{
    double sum = 1;
    for (int i = 1; i <= n; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    double x, s = 0;
	double item = 1;
	int n = 0;
	scanf("%lf", &x);
	while (fabs(item) >= 0.00001)
	{
		n++;
		item = pow(x, n) / fact(n);
		s = s + item;
	}
	printf("s=%.2f", s);
    return 0;
}