/*forex2-1.c*/
#include <stdio.h>
void dispFloat(float fv){
    printf("受け取った値=%f\n",fv);
    return;
}

int main(void){
    float f;
    printf("実数値を入力してください>");
    scanf("%f",&f);
    dispFloat(f);
    return 0;
}