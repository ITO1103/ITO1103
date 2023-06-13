/*発展課題07 t22j209*/
#include <stdio.h>
#define YOUSOSUU    10  //YOUSOSUUは10
int main(void)
{   
    int ary1[YOUSOSUU] = {-19,20,-88,7,82,1,-33,95,97,96};
    int i,maxvalue,soeji;

    //最大値を探索する処理の始め

    maxvalue = ary1[0]; soeji = 0;
    for(int i = 0;i < YOUSOSUU; i++){
        if(ary1[i] > maxvalue){
            maxvalue = ary1[i];
            soeji = i;
        }
    }
    
    //最大値を探索する処理の終わり

    printf("最大値は%dであり、添字%d番にあります\n",maxvalue,soeji);

    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc ex-kadai07-1.c -o ex-kadai07-1
t22j209@pc30:~/CompC$ ./ex-kadai07-1
最大値は97であり、添字8番にあります
*/