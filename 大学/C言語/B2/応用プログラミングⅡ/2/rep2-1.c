#include <stdio.h>

void convUnitsofLength(int length, double *feet, double *yard, double *inch){
    *feet = length * 3.28084;
    *yard = length * 1.09361;
    *inch = length * 39.37008;
}

int main(void){
    int length;
    double feet,yard,inch;
    printf("変換する長さを入力して下さい：");
    scanf("%d",&length);
    convUnitsofLength(length,&feet,&yard,&inch);
    printf("%d[m]は%f[ft],%f[yd],%f[inch]です。\n",length,feet,yard,inch);
    return 0;
}