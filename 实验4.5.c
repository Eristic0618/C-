#include <stdio.h>
#include <math.h>

int main()
{
	double x, s = 0;
	double a = 1.0;
	scanf("%lf", &x);
	double temp = x;
	for (int i = 1; fabs(temp / a) >= 0.00001; i++)
	{
		s += temp / a;
		a *= i + 1;
		temp *= x;
	}
	s++;
	printf("s=%.4f", s);
	return 0;
}