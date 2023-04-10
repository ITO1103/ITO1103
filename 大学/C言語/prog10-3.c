/* #defineを使用したバージョン */

#include <stdio.h>
#define  KAMOKUSU   5     /* KAMOKUSU は科目数の5である */
int main(void)
{
    double avg;
    int k[KAMOKUSU] = {100, 80, 90, 95, 85};  /* KAMOKUSUは5 */
    int sum = 0;
    int i;

    for (i = 0; i < KAMOKUSU; i++) {  /* KAMOKUSUは5 */
        sum = sum + k[i];
    }
    avg = (double)sum / KAMOKUSU;     /* KAMOKUSUは5　下のprintfにもある */
    printf("%d科目の合計点は%d点  平均点は%.1f点です\n", KAMOKUSU, sum, avg); 

    return 0;
}
