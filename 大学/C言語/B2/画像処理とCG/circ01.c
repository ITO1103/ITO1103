#include <stdio.h>
#include <math.h>
#define PI 3.141592653
float circ(float len, float s);

int main(void)
{
    float a = 1;
    printf("円の円形度: %f\n", circ(2 * PI * a, PI * a * a));
    printf("正方形の円形度: %f\n", circ(4 * a, a * a));
    printf("2等辺直角三角形の円形度: %f\n", circ(a + a + a * sqrt(2), a * a /2.0));
    printf("正三角形の円形度: %f\n", circ(3 * a, (sqrt(3) / 4) * a * a));

    return 0;
}

/*
    円形度を求める関数 circ
      引数：周囲長len, 面積s
      戻り値：円形度
*/
float circ(float len, float s)
{
    return 4 * PI * s / (len * len);
}


// （実行結果）
// 円の円形度: 1.000000
// 正方形の円形度: 0.785398
// 2等辺直角三角形の円形度: 0.269506
// 正三角形の円形度: 0.604600
