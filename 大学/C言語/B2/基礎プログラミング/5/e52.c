#include <stdio.h>
int main(void){
    int height;
    double weight;

    printf("あなたの身長を整数で入力しなさい:");
    scanf("%d",&height);
    printf("あなたの体重を入力しなさい:");
    scanf("%lf",&weight);
    printf("あなたの身長は%dcm、体重は%fKgです。\n",height,weight);
    return 0;
}