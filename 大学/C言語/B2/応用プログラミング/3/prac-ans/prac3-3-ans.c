#include <stdio.h>
int getMaxValue( int a, int b)
{
    int max;
    max = a;
    if ( max < b ) /*最初にmaxにaを代入しているから、bがaより*/
        max = b; /*大きかったらbを返す*/
    return max;
}

int main(void)
{
    int returnv, a, b, c, d;
    printf("４つの整数値をxx,yy,zz,aaの形式で入力してください\n");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);

/*複雑に考える必要はない。トーナメントで勝ち抜いた値が最大値*/
    returnv = getMaxValue (a, b );
    returnv = getMaxValue (returnv, c );
    returnv = getMaxValue (returnv, d );
    printf("%d,%d,%d,%dでは%dが最大値です。\n", a, b, c, d, returnv );
    return 0;
}
