#include <stdio.h>
#define N 1000
double calcAverage(double data[], int n);
double calcVariance(double data[], int n, double average);
int main(void)
{
	double data[N], average, variance;
	int i;
	for (i = 0; i < N; i++)
		scanf("%lf", &data[i]);
	average = calcAverage(data, N);
    variance = calcVariance(data, N, average);
	printf("%d件のデータの平均値は%fです\n", N, average);
    printf("%d件のデータの分散は%fです\n", N, variance);
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
double calcVariance(double data[], int n, double average)
{
    int i;
    double variance = 0.0;
    for(i = 0; i < n; i++){
        variance += (data[i] - average) * (data[i] - average);
    }
    return variance / n;
}