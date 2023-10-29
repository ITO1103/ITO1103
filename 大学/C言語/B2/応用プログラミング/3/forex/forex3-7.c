#include <stdio.h>
#include <math.h>
double deg2rad(int deg)
{
	double rad;
	rad = M_PI * deg / 180.0;
	return rad;
}

double calcCSx(int r, double theta)
{
	return r * cos(theta);
}

double calcCSy(int r, double theta)
{
	return r * sin(theta);
}

int main(void)
{
	int deg, r;
	double theta, x, y;
	r = 2;
	deg = 30;		/*30度*/
	theta = deg2rad(deg);	/*度からradianへ変換*/
	x = calcCSx(r, theta);
	y = calcCSy(r, theta);
	printf("(r,θ)=(%d,%d)は(x,y) = (%f,%f)です。\n", r, deg, x, y);
	return 0;

}
