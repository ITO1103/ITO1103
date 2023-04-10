#include <stdio.h>

int main(void)
{
    double value;
    double a, b;  /* 同型の複数の変数を宣言する際，カンマ(,)で区切って並べても良い */
    a = 10.0;   /* 変数aに10.0を代入 */
    b = 3.0;    /* 変数bに 3.0を代入 */
    value = a / b;  /* 変数aとbを用いて3.333...を計算し，変数valueに代入 */
    printf("valueの値は %f / %f の計算の値%fである\n", a, b, value);

    return 0;
}
