/*発展課題08 t22j209*/
#include<stdio.h>
#define GAKUSEI 7
#define KAMOKU  3

int main(void)
{
    int kokugo[GAKUSEI] = {60, 55, 70 , 98, 82, 65, 93};
    int sugaku[GAKUSEI] = {95, 85, 75, 95, 90, 60, 90};
    int eigo[GAKUSEI]   = {87, 70, 95, 93, 85, 90, 70};
    int goukei[GAKUSEI] = {0};     //合計点の各要素を0で初期化
    double avg[GAKUSEI] = {0.0};    //平均点の各要素を0.0で初期化
    int i, soeji;
    double maxvalue;

    //合計点算出の処理
    for(i = 0;i < GAKUSEI;i++){
        goukei[i] = kokugo[i] + sugaku[i] + eigo[i];
    }

    //平均点算出の処理
    for(i = 0;i < GAKUSEI;i++){
        avg[i] = (kokugo[i] + sugaku[i] + eigo[i])/3.0;
    }
    
    //各学生の平均点の出力
    for (i = 0; i < GAKUSEI; i++){
        printf("学生%dの合計点は%dで平均点は%.3fです\n",i,goukei[i],avg[i]);
    }
    //平均点トップの学生の探索とその出力
    maxvalue = avg[0];  soeji = 0;
    for(int i = 0;i < GAKUSEI; i++){
        if(avg[i] > maxvalue){
            maxvalue = avg[i];
            soeji = i;
        }
        //iって0がない？
    }
    printf("トップの平均点は%.3fであり、学生%d番です\n",maxvalue,soeji);
    
    return 0;
}

//実行結果
/*
t22j209@pc30:~/CompC$ gcc ex-kadai08.c -o ex-kadai08
t22j209@pc30:~/CompC$ ./ex-kadai08
学生0の合計点は242で平均点は80.667です
学生1の合計点は210で平均点は70.000です
学生2の合計点は240で平均点は80.000です
学生3の合計点は286で平均点は95.333です
学生4の合計点は257で平均点は85.667です
学生5の合計点は215で平均点は71.667です
学生6の合計点は253で平均点は84.333です
トップの平均点は95.333であり、学生3番です
*/