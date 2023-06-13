#include <stdio.h>
int main(void){
    int num,num2,num3;
    printf("数値を入力してください:");
    scanf("%d",&num);
    num2 = num*num;
    num3 = num*num*num;
    printf("%dの2乗は%dです\n",num,num2);
    printf("%dの3乗は%dです\n",num,num3);
    
    return 0;
}