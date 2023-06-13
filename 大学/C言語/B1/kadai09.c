/*課題09 t22j209*/
#include <stdio.h>
int main(void)
{
    int r1,r2,sum,avg;
    printf("時間と分を入力=>");scanf("%d %d",&r1,&r2);
    sum = r1 * 60;
    avg = sum + r2;
    printf("%d分です。\n",avg);

    return 0;
}

/*実行結果*/
/*
t22j209@pc30:~/CompC$ gcc kadai09.c -o kadai09
t22j209@pc30:~/CompC$ ./kadai09
時間と分を入力=>2 20
140分です。
*/