#include <stdio.h>
#define NUM 5
void sortMatrixData(int test[], int n);
void setMatrixData(int test[], int n);
void dispMatrixData(int test[], int n);

int main(void)
{
	int test[NUM];
	setMatrixData(test, NUM);
	sortMatrixData(test, NUM);
	dispMatrixData(test, NUM);
	return 0;
}
void sortMatrixData(int test[], int n)
{
	int s, t, tmp;
	for (s = 0; s < n - 1; s++){
		for (t = s + 1; t < n; t++){
			if (test[t] > test[s]){
				tmp = test[t];
				test[t] = test[s];
				test[s] = tmp;
			}
		}
	}
	return;
}
void setMatrixData(int test[], int n)
{
	int i;
	printf("5人の点数を入力してください\n");
	for (i = 0; i < n; i++){
		scanf("%d", &test[i]);
	}
	return;
}
void dispMatrixData(int test[], int n)
{
	int i;
	for (i = 0; i < n; i++){
		printf("%d番目の人の点数は%dです\n", i + 1, test[i]);
	}
	return;
}
