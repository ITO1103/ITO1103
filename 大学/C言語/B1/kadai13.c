/*課題13 t22j209*/
#include <stdio.h>
#define  KAMOKUSU   5     /* KAMOKUSU は科目数の5である */
int main(void)
{
    double avg;
    int k[KAMOKUSU];    /* KAMOKUSUは5 */
    int sum = 0;
    int i;

    for (i = 0; i < KAMOKUSU; i++) {  /* KAMOKUSUは5 */
        printf("科目k[%d]の点数を入力:", i);    scanf("%d", &k[i]);
        sum = sum + k[i];

    }
    // for (i = 0; i < KAMOKUSU; i++) {  /* KAMOKUSUは5 */
    //     sum = sum + k[i];
    // }
    avg = (double)sum / KAMOKUSU;     /* KAMOKUSUは5　下のprintfにもある */
    printf("%d科目の合計点は%d点  平均点は%.1f点です\n", KAMOKUSU, sum, avg); 

    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc kadai13.c -o kadai13
t22j209@pc30:~/CompC$ ./kadai13
科目k[0]の点数を入力:100
科目k[1]の点数を入力:80
科目k[2]の点数を入力:90
科目k[3]の点数を入力:95
科目k[4]の点数を入力:85
5科目の合計点は450点  平均点は90.0点です
*/