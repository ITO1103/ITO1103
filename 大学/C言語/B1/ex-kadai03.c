/*発展課題3 t22j209*/
#include <stdio.h>
int main(void)
{
    int tei,hi;
    double answer;
    printf("底辺と高さを入力してください=>");scanf("%d %d",&tei,&hi);
    answer = tei * hi / 2.0;
    printf("三角形の面積は%lfです\n",answer);
    
    return 0;
}

/*実行結果*/
/*
t22j209@pc30:~/CompC$ gcc ex-kadai03.c -o ex-kadai03
t22j209@pc30:~/CompC$ ./ex-kadai03
底辺と高さを入力してください=>5 5
三角形の面積は12.500000です
*/