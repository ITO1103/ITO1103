/*rep1-1.c*/
#include <stdio.h>
int main(void){
    int i, dim[] = {5, 1, 2, 3, 4};
    int num = 5, max, total;

    max = 0;
    total = 0;
    /*設問(1)最大値の検出処理の記述*/
    for(i=0;i<num;i++){
        if(max<dim[i]){
            max = dim[i];
        }
    }
    /*設問(2)合計値の算出処理の記述*/
    for(i=0;i<num;i++){
        total += dim[i];
    }

    printf("最大値は%dです\n",max);
    printf("合計値は%dです\n",total);
    return 0;
}