/*forex2-2.c*/
#include <stdio.h>
void dispMinValue(double a,double b){
    double min;
    min = a;
    if(min > b){
        min = b;
    }
    printf("%.1fと%.1fでは%.1fが小さい\n",a,b,min);
    return;
}

int main(void){
    dispMinValue(2.4,1.2);
    return 0;
}