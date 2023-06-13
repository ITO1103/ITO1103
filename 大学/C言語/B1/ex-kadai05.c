/*発展課題5 t22j209*/
#include <stdio.h>
int main(void)
{
    int a;
    printf("テストの点数を入力してください：");scanf("%d",&a);
    if(a >= 0){
        if(a < 60){
            printf("不合格です.\n");
        }
        else if(a <= 60){
            printf("成績はCです.もう少しがんばりましょう.\n");
        }
        else if(a <= 70){
            printf("成績はBです.さらに上を目指そう.\n");
        }
        else if(a <= 80){
            printf("成績はAです.よくがんばりました.\n");
        }
        else if(a <=90){
            printf("成績はSです.すばらしい.\n");
        }
        else if(a == 100){
            printf("満点です.完璧です.\n");
        }
    }
    else{
        printf("入力が間違っています.\n");
    }
    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc ex-kadai05.c -o ex-kadai05
t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：-19
入力が間違っています.

t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：0
不合格です.

t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：60
成績はCです.もう少しがんばりましょう.

t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：70
成績はBです.さらに上を目指そう.

t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：80
成績はAです.よくがんばりました.

t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：90
成績はSです.すばらしい.

t22j209@pc30:~/CompC$ ./ex-kadai05
テストの点数を入力してください：100
満点です.完璧です.
*/