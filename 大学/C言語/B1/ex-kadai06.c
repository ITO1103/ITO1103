/*発展課題06 t22j209*/
#include <stdio.h>
int main(void)
{
    int i, j; 

    for (i = 1; i <= 9; i++) {     /* i++ は i = i + 1 でも良い */
        for (j = 1; j <= 9; j++) { /* j++ は j = j + 1 でも良い */
            /*printf("%2d ",i * j);*/
            if(j % 5 == 0){
                printf("%2d ", i * j);
            }
            else{
                printf("   ");
            }
        }
        printf("改行した\n");
    }

    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc ex-kadai06.c -o ex-kadai06
t22j209@pc30:~/CompC$ ./ex-kadai06
             5             改行した
            10             改行した
            15             改行した
            20             改行した
            25             改行した
            30             改行した
            35             改行した
            40             改行した
            45             改行した
*/