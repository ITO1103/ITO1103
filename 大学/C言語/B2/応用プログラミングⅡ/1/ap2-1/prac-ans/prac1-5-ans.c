#include <stdio.h>
int main(void)
{
	int *pA, a=3;
	int *pB, b = 4;
	int c;
	/*ここから*/
	pA = &a;
	pB = &b;
	c = *pA + *pB;
	/*ここまでの間を記述しなさい*/
	printf("%d + %d = %d\n", a, b, c );
	return 0;
}
