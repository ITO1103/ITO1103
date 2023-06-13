/*課題12-1 t22j209*/
#include <stdio.h>
int main(void)
{
    int i, start, end;
    start = 1;
    end = 8;
    int ans = 1;
    
    for (i = start; i <= end; i = i + 1) {
        ans = ans * i;
        printf("%d!=%d\n",i,ans);
    }
    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc kadai12.c -o kadai12
t22j209@pc30:~/CompC$ ./kadai12
1!=1
2!=2
3!=6
4!=24
5!=120
6!=720
7!=5040
8!=40320
*/