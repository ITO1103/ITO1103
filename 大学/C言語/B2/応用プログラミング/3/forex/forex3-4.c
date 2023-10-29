#include <stdio.h>
#include <math.h>
double deg2rad( int deg)
{
    double rad;
    rad = M_PI * deg / 180.0;
    return rad;
}

int main(void)
{
    int deg=60;
    double rad, radCos;
    rad = deg2rad ( deg );
    radCos = cos( rad );
    printf("%d度の余弦(COS)の値は %fです\n", deg, radCos );
    return 0;
}
