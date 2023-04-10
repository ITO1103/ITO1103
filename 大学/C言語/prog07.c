#include <stdio.h>
int main(void)
{
    double avg;
    int k1, k2, k3; /* k1：国語, k2：数学, k3：英語 */
    int sum;

    printf("国語・数学・英語の点数入力 => ");  
    scanf("%d %d %d", &k1,  &k2,  &k3);
    sum = k1 + k2 + k3;
    avg = sum / 3.0;

    if (avg < 60) {
        printf("平均点は60未満の%.1f点です．もっと頑張りましょう．\n", avg);
    }
    else {
        printf("平均点は60以上の%.1f点です．\n", avg);
    }
    return 0;
}
