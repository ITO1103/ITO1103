/*課題11 t22j209*/
#include <stdio.h>
int main(void)
{
    int n1;
    printf("正の整数numの入力：");scanf("%d",&n1);
    if(n1 % 2 == 0){
        printf("正の整数%dは偶数です\n",n1);
    }
    else{
        printf("正の整数%dは奇数です\n",n1);
    }

    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc kadai11.c -o kadai11
t22j209@pc30:~/CompC$ ./kadai11
正の整数numの入力：20
正の整数20は偶数です

t22j209@pc30:~/CompC$ ./kadai11
正の整数numの入力：55
正の整数55は奇数です
*/