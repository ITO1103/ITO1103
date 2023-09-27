#include <stdio.h>

int main(void){
    int num;
    printf("整数の入力：");
    scanf("%d",&num);
    if(num > 0){
        printf("入力された整数値は正数です。\n");
    }else{
        printf("入力された整数値は整数ではありません。\n");
    }
    return 0;
}