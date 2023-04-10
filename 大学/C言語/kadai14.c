/*課題14 t22j209*/
#include<stdio.h>
#define YOUSOSUU    10  //YOUSOSUUは10
int main(void)
{
    int ary1[YOUSOSUU] = {9,0,8,7,2,1,3,5,4,6};
    int ary2[YOUSOSUU];
    int i;

    //配列のコピーの処理始め

    for(i = 0; i < YOUSOSUU; i++){
        ary2[i] = ary1[i];
    }

    //配列のコピーの処理終わり

    printf("ary1の各要素の値：");
    for(i = 0;i < YOUSOSUU; i++)
        printf("%2d",ary1[i]);
    printf("\nary2の各要素の値：");
    for(i = 0;i < YOUSOSUU; i++)
        printf("%2d",ary2[i]);
    printf("\n");

    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc kadai14.c -o kadai14
t22j209@pc30:~/CompC$ ./kadai14
ary1の各要素の値： 9 0 8 7 2 1 3 5 4 6
ary2の各要素の値： 9 0 8 7 2 1 3 5 4 6
*/