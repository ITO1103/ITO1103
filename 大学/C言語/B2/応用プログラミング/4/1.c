#include <stdio.h>
#include <math.h>

double deg2rad(double deg)
{
    double rad;
    rad = M_PI * deg / 180.0;
    return rad;
}

double calcDistance(int l, double rad){
    return l * cos(rad);
}

int main(void){
    int l = 200;
    double deg = 25.5;

    double rad , x;

    rad = deg2rad(deg);
    x = calcDistance(l, rad);
    printf("現在地からクレドビルまでの距離は%.1fです。\n",x);

    return 0;
}