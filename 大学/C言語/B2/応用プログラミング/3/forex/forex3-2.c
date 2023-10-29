#include <stdio.h>
double calcBmi( int kg, double m)
{
    double bmi;
    bmi = kg / ( m * m );
    return bmi;
}
int main(void)
{
    int kg;
    double m, bmi;
    /*kg=50, m=1.72と入力して確認 BMI = 16.90*/
    printf("あたなと体重kg（整数値）:"); scanf("%d", &kg );
    printf("あたなと身長m（実数値）:"); scanf("%lf", &m );
    bmi = calcBmi( kg, m );
    printf("あなた(体重%dkg, 身長%.3fm)のBMIは%.2fです。\n", kg, m, bmi );
    return 0;
}
