#include <stdio.h>

int main(void){
    int dim[] = {2, 5, 8};
    int sum=0,avg=0;

    for(int i=0;i<3;i++){
        sum += dim[i];
    }
    avg = (sum / 3);

    printf("最大値：%d\n平均値：%d\n",sum,avg);
}