#include <stdio.h>
int main(void){
    int a,b,c,d;
    printf("１行１列成分を入力：");
    scanf("%d",&a);
    printf("１行２列成分を入力：");
    scanf("%d",&b);
    printf("２行１列成分を入力：");
    scanf("%d",&c);
    printf("２行２列成分を入力：");
    scanf("%d",&d);
    printf("入力された行列は\n%d    %d\n%d    %d\nです。\n",a,b,c,d);
    return 0;
}