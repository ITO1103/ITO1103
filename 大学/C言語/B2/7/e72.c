#include <stdio.h>
int main(void){
    int a,b,c;
    double ans;
    printf("整数1を入力してください：");
    scanf("%d",&a);
    printf("整数2を入力してください：");
    scanf("%d",&b);
    printf("整数3を入力してください：");
    scanf("%d",&c);
    ans = ((double)a + (double)b +(double)c) /3;
    printf("入力した3つの整数の平均値は%fです。\n",ans);
    return 0;
}