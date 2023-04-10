/*課題07 t22j209*/
#include <stdio.h>

int main(void)
{
    double avg,jilk;
    int r,pi = 3.14159,sum;
    printf("半径の値を入力=>");scanf("%d",&r);
    sum = r + r;
    avg = sum * pi;
    jilk = r * r * pi;
    printf("その円の直径は%d、円周は%f、面積は%fです。\n",sum,avg,jilk);

    return 0;
}

/*実行結果*/
/*
t22j209@pc30:~/CompC$ gcc kadai07.c -o kadai07
t22j209@pc30:~/CompC$ ./kadai07
半径の値を入力=>5
その円の直径は10、円周は30.000000、面積は75.000000です。
*/