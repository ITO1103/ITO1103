#include <stdio.h>
int main(void)
{
    int i, j; 

    for (i = 1; i <= 9; i++) {     /* i++ は i = i + 1 でも良い */
        for (j = 1; j <= 9; j++) { /* j++ は j = j + 1 でも良い */
            printf("%2d ", i * j);
        }
        printf("改行した\n");
    }

    return 0;
}
