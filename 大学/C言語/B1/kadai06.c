/* 課題6 t22j209 */
#include <stdio.h>

int main(void)
{
    double r,e,answer;
    r = 5;
    e = 3.14;
    answer = r * r * e;
    printf("半径5センチメートルの円の面積は%fcm^2である\n",answer);
    
}

/*実行結果*/
/*t22j209@pc27:~/CompC$ gcc kadai06.c -o kadai06
t22j209@pc27:~/CompC$ ./kadai06
半径5センチメートルの円の面積は78.500000cm^2である
*/