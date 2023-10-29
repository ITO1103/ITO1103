#include <stdio.h>
double calcAverage( int v1, int v2)
{
    double ave;
    ave = (v1 + v2) / 2.0;
    return ave;
}

int main(void)
{
    int v1, v2;
    double ave;
    printf("整数値を２つ，aa, bbの形式で入力してください\n");
    scanf("%d,%d", &v1, &v2 );
    ave = calcAverage (v1, v2 );
    printf("%dと%dの平均値は%.2fです\n", v1, v2, ave );
    return 0;
}
