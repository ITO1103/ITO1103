#include <stdio.h>
#define  KAMOKUSU   7     /* KAMOKUSU は科目数の7である */
int main(void)
{
    double avg;
    int k[KAMOKUSU];    /* KAMOKUSUは7 */
    int sum = 0;
    int i;

    for (i = 0; i < KAMOKUSU; i++) {  /* KAMOKUSUは7 */
        printf("科目k[%d]の点数を入力:", i);    scanf("%d", &k[i]);
    }
    for (i = 0; i < KAMOKUSU; i++) {  /* KAMOKUSUは7 */
        sum = sum + k[i];
    }
    avg = (double)sum / KAMOKUSU;     /* KAMOKUSUは7　下のprintfにもある */
    printf("%d科目の合計点は%d点  平均点は%.1f点です\n", KAMOKUSU, sum, avg); 

    return 0;
}
