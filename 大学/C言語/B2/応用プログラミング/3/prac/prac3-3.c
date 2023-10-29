#include <stdio.h>
#include <math.h>

int getMaxValue(int a, int b, int c){
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
}

int main(void){
    int a,b;
    printf("整数a,bを入力してください。\n");
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    getMaxValue(a,b);
    printf("最大値は%dです。\n",getMaxValue());
}