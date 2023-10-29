#include <stdio.h>
#include <math.h>
int main(void)
{
	printf("%f\n", pow(2.0, 1.0/2));	/*累乗根*/
	printf("%f\n", pow(2.0, 1.0 / 3));	/*累乗根：３乗したら2.0になる値*/
	printf("%f\n", pow(2.0, -2.0));
	return 0;
}
