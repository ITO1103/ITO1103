/*発展課題4 t22j209*/
#include <stdio.h>

int main(void)
{
    double hi,hev,bmi;
    printf("身長[m]と体重[Kg]を入力してください=>");scanf("%lf %lf",&hi,&hev);
    bmi = hev / (hi * hi);
    printf("BMIは%lfです\n",bmi);

    return 0;
}

/*実行結果*/
/*
t22j209@pc30:~/CompC$ gcc ex-kadai04.c -o ex-kadai04
t22j209@pc30:~/CompC$ ./ex-kadai04
身長[m]と体重[Kg]を入力してください=>1.724 57.6
BMIは19.379741です
*/