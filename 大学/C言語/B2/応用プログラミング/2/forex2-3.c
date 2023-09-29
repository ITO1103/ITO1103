/*forex2-3.c*/
#include <stdio.h>

void dispBmi(int kg,double m){
    double bmi;
    bmi = kg / (m * m);
    printf("あなた(体重%dkg,身長%.2fm)のBMIは%.2fです。\n",kg,m,bmi);
    /*---Report problem---*/
    return;
}

int main(void){
    int kg;
    double m;
    /*kg=50,m=1.72と入力して確認 BMI = 16.90*/
    printf("あなたと体重kg(整数値)：");scanf("%d",&kg);
    printf("あなたと身長m(実数値)：");scanf("%lf",&m);
    dispBmi(kg,m);
    return 0;
}