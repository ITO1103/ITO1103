#include <stdio.h>
int main(void)
{
    double avg;
    int k[5]; /* k[0]：国語, k[1]：数学, k[2]：英語, k[3]：理科, k[4]：社会 */
    int sum;

    k[0] = 100;
    k[1] =  80;
    k[2] =  90;
    k[3] =  95;
    k[4] =  85;

    sum = k[0] + k[1] + k[2] + k[3] + k[4];  /* 合計点を変数sumに代入 */
    avg = sum / 5.0;
    printf("5科目の合計点は%d点  平均点は%.1f点です\n", sum, avg);

    return 0;
}
