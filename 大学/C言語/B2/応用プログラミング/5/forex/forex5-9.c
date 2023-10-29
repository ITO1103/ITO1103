#include <stdio.h>
#define N 1000
double calcAverage(double data[], int n);
int main(void)
{
	double data[N], average;
	int i;
	for (i = 0; i < N; i++)
		scanf("%lf", &data[i]);
	average = calcAverage(data, N);
	printf("%d件のデータの平均値は%fです\n", N, average);
	return 0;
}
double calcAverage(double data[], int n)
{
	int i;
	double fsum = 0.0;
	for (i = 0; i < n; i++)
		fsum += data[i];
	return fsum / n;
}
