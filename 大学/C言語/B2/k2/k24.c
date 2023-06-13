#include <stdio.h>
int main(void){
    double a;
    printf("あなたの今朝の体温を記入しなさい：");
    scanf("%lf",&a);
    printf("今朝の体温は%.1f度です\n",a);
    return 0;
}