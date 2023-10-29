#include <stdio.h>
#include <math.h>
double rad2deg(double rad)
{
	double deg;
	deg = 180.0 * rad / M_PI;
	return deg;
}

int main(void)
{
	double deg, rad;
	rad = 2.0*M_PI;
	deg = rad2deg(rad);
	printf("%fラジアンは%f度です\n", rad, deg);
	return 0;
}
