#include <stdio.h>
#include <math.h>
double calcLen(double a, double b)
{
	double a2, b2, c;
	a2 = pow(a, 2.0);
	b2 = pow(b, 2.0);
	c = sqrt(a2 + b2);
	return c;
}
int main(void)
{
	double a, b, c;
	printf("辺aの長さ = "); scanf("%lf", &a);	/*エルf　です*/
	printf("辺bの長さ = "); scanf("%lf", &b); 	/*エルf　です*/
	c = calcLen(a, b);
	printf("斜辺cの長さは%fです。\n", c);
	return 0;
}
