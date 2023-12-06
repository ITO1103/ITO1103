#include <stdio.h>
void calcPct( int s, int z, double *pct )
{
	*pct = ((double)s / z) * 100.0;
	printf("s=%d\n", s);
	printf("sのアドレス %p\n", &s);
	printf("z=%d\n",z);
	printf("zのアドレス %p\n", &z);
	printf("pctのアドレス %p\n", &pct);
	printf("pctが指すアドレス %p\n", pct);
	printf("pctが指すアドレスが持つ値 %f\n", *pct);

	return;
}
int main(void)
{
	int a=20, b = 200;
	double pct;
	puts("calcPct関数");
	calcPct( a, b, &pct );
	puts("main関数");
	printf("%d は %d の %fパーセントです。\n", a, b, pct);
	printf("a=%d\n", a);
	printf("aのアドレス %p\n", &a);
	printf("b=%d\n", b);
	printf("bのアドレス %p\n", &b);
	printf("pct=%f\n", pct);
	printf("pctのアドレス %p\n", &pct);

	return 0;
}
