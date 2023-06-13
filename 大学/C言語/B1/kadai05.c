/* 課題5 t22j209 */
#include <stdio.h>

int main(void)
{
    double n1,n2,answer;
    n1 = 9.0;
    n2 = 2.0;
    answer = n1 / n2;
    printf("n1は%.3fでn2は%.3fです\nn1/n2の結果は%.3fです\n",n1,n2,answer);
    return 0;
}

/*実行結果*/
/*t22j209@pc27:~/CompC$ gcc kadai05.c -o kadai05
t22j209@pc27:~/CompC$ ./kadai05
n1は9.000でn2は2.000です
n1/n2の結果は4.500です
*/