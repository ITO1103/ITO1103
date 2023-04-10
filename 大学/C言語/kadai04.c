/* 課題4 t22j209 */
#include <stdio.h>
int main(void)
{
    int n1,n2;
    n1 = 10.999;
    n2 = 20.245;

    printf("n1には%dが代入されており,n2には%dが代入されている\n",n1,n2);
    return 0;
}

/*実行結果*/
/*t22j209@pc27:~/CompC$ gcc kadai04.c -o kadai04
t22j209@pc27:~/CompC$ ./kadai04
n1には10が代入されており,n2には20が代入されている
*/