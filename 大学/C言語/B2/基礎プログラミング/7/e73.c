#include <stdio.h>
int main(void){
    int high;
    double weight,ans;
    printf("身長（cm：整数値）を入力しなさい：");
    scanf("%d",&high);
    printf("体重（kg：実数値）を入力しなさい：");
    scanf("%lf",&weight);
    ans = (weight / (((double)high/100) * ((double)high/100)));
    printf("あなたのBMI（実数値）は%fです。\n",ans);
    return 0;
}