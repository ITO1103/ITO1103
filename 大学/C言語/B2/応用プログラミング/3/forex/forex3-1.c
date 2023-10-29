#include <stdio.h>
int getMinValue( int a, int b)
{
    int min;
    min = a;
    if ( min > b ) /*最初にminにaを代入しているから、bよりmin(a)が*/
        min = b; /*小さかったらmin(a)を返却*/
    return min;
}

int main(void)
{
    int returnv, a, b;
    printf("2つの整数値をxx,yyの形式で入力してください\n");
    scanf("%d,%d", &a, &b);
    returnv = getMinValue(a, b );
    printf("%dと%dでは%dが小さい\n", a, b, returnv );
    return 0;
}
