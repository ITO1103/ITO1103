/*課題08 t22j209*/
#include <stdio.h>

int main(void)
{
    double avg;
    int r,sum;
    printf("時間を分で入力(必ず整数)=>");scanf("%d",&r);
    sum = r / 60;
    avg = (r / 60.0 - sum)*60;
    printf("%d時間%f分です\n",sum,avg);
    
    return 0;
}

/*実行結果*/
/*
t22j209@pc30:~/CompC$ gcc kadai08.c -o kadai08
t22j209@pc30:~/CompC$ ./kadai08
時間を分で入力(必ず整数)=>150
2時間30.000000分です
*/