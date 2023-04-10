#include <stdio.h>
int main(void)
{
    int i, start, end; 
    int sum = 0;
    printf("初めの整数値を入力 => ");  scanf("%d", &start);
    printf("最後の整数値を入力 => ");  scanf("%d", &end);

    for (i = start; i <= end; i = i + 1) {  /* i = i + 1 は i++ でも良い */
        sum = sum + i;     /* または，sum += i; でも良い． */
    }
    printf("%d から %d までの加算結果は %d です\n", start, end, sum);

    return 0;
}
