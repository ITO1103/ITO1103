/*課題12 t22j209*/
#include <stdio.h>
int main(void)
{
    int i, start, end;
    start = 1;
    end = 8;
    int ans = 1;
    
    for (i = start; i <= end; i = i + 1) {
        ans = ans * i;
    }
    //printf("ループ後 start:%d end:%d ans:%2d i:%d \n", start, end, ans, i);

    printf("%d!の結果は %d です\n",end, ans);
    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc kadai12.c -o kadai12
t22j209@pc30:~/CompC$ ./kadai12
8!の結果は 40320 です
*/