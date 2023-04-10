/* printf文を追加したバージョン */

#include <stdio.h>
int main(void)
{
    int i, start, end; 
    int sum = 0;
    printf("初めの整数値を入力 => ");  scanf("%d", &start);
    printf("最後の整数値を入力 => ");  scanf("%d", &end);

    printf("ループ前 start:%d end:%d sum:%2d i:%d \n", start, end, sum, i);
    for (i = start; i <= end; i = i + 1) {
        sum = sum + i;
        printf("ループ中 start:%d end:%d sum:%2d i:%d \n", start, end, 
                                                          sum, i);
    }
    printf("ループ後 start:%d end:%d sum:%2d i:%d \n", start, end, sum, i);

    printf("%d から %d までの加算結果は %d です\n", start, end, sum);
    return 0;
}
