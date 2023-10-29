#include <stdio.h>
#include <math.h>
double rad2deg(double rad)
{
    double deg;
    deg = (180.0 * rad) / M_PI;
    return deg;
}

int main(void)
{
    int deg;
    double rad = 6.283185, radCos , ans;
    ans = rad2deg ( rad );
    //radCos = cos( rad );
    printf("ラジアン%fは %f度です\n", rad, ans );
    return 0;
}
