#include <stdio.h>
int main(void){
    double height,weight,bmi;
    printf("身長（m）を入力しなさい：");
    scanf("%lf",&height);
    printf("体重（kg）を入力しなさい：");
    scanf("%lf",&weight);
    bmi = (weight / (height * height));
    printf("あなたのBMIは%.1fです\n",bmi);
    return 0;
}