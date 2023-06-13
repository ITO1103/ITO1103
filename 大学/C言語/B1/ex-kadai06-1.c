/*発展課題06-1 t22j209*/
#include <stdio.h>
int main(void)
{
    int i, j; 

    for (i = 1; i <= 9; i++) {     /* i++ は i = i + 1 でも良い */
        for (j = 1; j <= 9; j++) { /* j++ は j = j + 1 でも良い */
            if(i == j){
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
t22j209@pc30:~/CompC$ gcc ex-kadai06-1.c -o ex-kadai06-1
t22j209@pc30:~/CompC$ ./ex-kadai06-1
 1                         改行した
    4                      改行した
       9                   改行した
         16                改行した
            25             改行した
               36          改行した
                  49       改行した
                     64    改行した
                        81 改行した
*/