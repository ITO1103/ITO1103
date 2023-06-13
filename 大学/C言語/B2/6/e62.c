#include <stdio.h>
int main(void){
    int a,b,ans;
    printf("整数1を入力してください:");
    scanf("%d",&a);
    printf("整数2を入力してください:");
    scanf("%d",&b);
    ans = (a+b)/2;
    printf("入力した2つの整数の平均値は%dです\n",ans);

    return 0;
}