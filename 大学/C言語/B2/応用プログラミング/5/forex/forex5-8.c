#include <stdio.h>
#define ROWS 2		/*2次元配列の行数*/
#define COLS 3		/*2次元配列の列数*/
int calcSumOfMtx2(int mtx[][COLS], int r, int c);

int main(void)
{
	/*配列の初期化子を与えての初期化*/
	/*ROWS, COLSは定数であり，変数ではないことに注意すること*/
	int matrix[ROWS][COLS] = {
		{1,2,3},
		{4,5,6}
	};
	int sum;
	sum = calcSumOfMtx2(matrix, ROWS, COLS);
	printf("2次元配列の要素の総和は%dです\n", sum);
	return 0;
}
/*２次元配列の場合、仮引数では行数は空欄とし、列数は指定すること*/
int calcSumOfMtx2(int mtx[][COLS], int r, int c)
{
	int i, j, sum = 0;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			sum += mtx[i][j];
	return sum;
}
