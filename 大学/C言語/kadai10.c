/*課題10 t22j209*/
#include <stdio.h>
int main(void)
{
    int n1,n2;
    printf("整数n1の入力：");scanf("%d",&n1);
    printf("整数n2の入力：");scanf("%d",&n2);
    if(n1 == n2){
        printf("二つの整数%dと%dは同じです\n",n1,n2);
    }
    else{
        printf("二つの整数%dと%dは違います\n",n1,n2);
    }

    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc kadai10.c -o kadai10
t22j209@pc30:~/CompC$ ./kadai10
整数n1の入力：-30
整数n2の入力：15
二つの整数-30と15は違います

t22j209@pc30:~/CompC$ ./kadai10
整数n1の入力：-100
整数n2の入力：-100
二つの整数-100と-100は同じです
*/