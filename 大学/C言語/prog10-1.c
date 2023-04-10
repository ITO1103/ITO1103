/*  sumの計算部をfor文で書き換えたバージョン */

#include <stdio.h>
int main(void)
{
    double avg;
    int k[5]; /* k[0]：国語, k[1]：数学, k[2]：英語, k[3]：理科, k[4]：社会 */
    int sum = 0;
    int i;

    k[0] = 100;
    k[1] =  80;
    k[2] =  90;
    k[3] =  95;
    k[4] =  85;

    for (i = 0; i < 5; i++) {
        sum = sum + k[i];    /* sum += k[i]; と書いても同じである */
    }
    avg = sum / 5.0;
    printf("5科目の合計点は%d点  平均点は%.1f点です\n", sum, avg);

    return 0;
}
