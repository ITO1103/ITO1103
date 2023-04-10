#include <stdio.h>

int main(void)
{
    double avg;
    int k1, k2, k3; /* k1：国語, k2：数学, k3：英語 */
    int sum;

    printf("国語・数学・英語の点数入力=>");scanf("%d %d %d",&k1,&k2,&k3);

    sum = k1 + k2 + k3;  /* 3科目の合計点を計算し，変数sumに代入 */
    avg = sum / 3.0;       /* 平均点を計算し，変数avgに代入 */
    printf("3科目の合計点は%d点  平均点は%.3f点です\n", sum, avg);

    return 0;
}
