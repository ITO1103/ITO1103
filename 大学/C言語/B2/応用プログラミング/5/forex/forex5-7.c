#include <stdio.h>
#define N 4
int calcSumofMtx( int a[], int n); /*作成すべき関数のプロトタイプ宣言*/
int main(void)
{
	int a[ N ] = {2, 5, 8, 11};
	int sum, i;
	/*ここにcalcGtofAp2関数の呼び出しを記述すること*/
	sum = calcSumofMtx( a, N );
	printf("数列 ");
	for ( i = 0; i < N; i++ )
		printf("%d ", a[i]);
	printf("の和は%dです。\n", sum);
	return 0;
}
int calcSumofMtx( int a[], int n)
{
	int i, sum = 0;
	for ( i = 0; i < n; i++ ){
		sum += a[i];
	}
	return sum;
}
