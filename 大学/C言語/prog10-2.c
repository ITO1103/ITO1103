/* 配列宣言部を新たに書き換えたバージョン */

#include <stdio.h>
int main(void)
{
    double avg;
    int k[5] = {100, 80, 90, 95, 85};  /* 配列kの宣言と共に各要素を初期化 */
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        sum = sum + k[i];    /* sum += k[i]; と書いても同じである */
    }
    avg = sum / 5.0;
    printf("5科目の合計点は%d点  平均点は%.1f点です\n", sum, avg);

    return 0;
}
