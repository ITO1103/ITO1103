#include <stdio.h>
void calcPct( int s, int z, double *pct )
{
	*pct = ((double)s / z) * 100.0;
}
int main(void)
{
	int a=20, b = 200;
	double pct;
	calcPct( a, b, &pct );
	printf("%d は %d の %fパーセントです。\n", a, b, pct);
	return 0;
}
