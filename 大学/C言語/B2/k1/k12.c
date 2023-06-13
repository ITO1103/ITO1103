#include <stdio.h>//ヘッダーをインクルード
int main(void)
{
    int i;//宣言

    //最初の模様をforでループさせる
    for(i = 0; i < 20; i++){
        printf("=");
    }
    printf("\n");

    //MENUの列の模様をforでループさせる
    for(i = 0; i < 4; i++){
        printf("=");
    }
    //MENUの列の空白をforでループさせる
    for(i = 0; i < 4; i++){
        printf(" ");
    }
    printf("MENU");
    //MENUの列の空白をforでループさせる
    for(i = 0; i < 4; i++){
        printf(" ");
    }
    //MENUの列の模様をforでループさせる
    for(i = 0; i < 4; i++){
        printf("=");
    }
    printf("\n");
    //3行目の模様をforでループさせる
    for(i = 0; i < 20; i++){
        printf("=");
    }
    printf("\n");

    printf("1. Recommended\n");
    for(i = 0; i < 3; i++){
        printf(" ");
    }
    printf("i. 本日のスープ\n");
    for(i = 0; i < 3; i++){
        printf(" ");
    }
    printf("ii.自家製版\n");
    printf("2. Main Dishes\n");
    for(i = 0; i < 3; i++){
        printf(" ");
    }
    printf("i. カレーライス\n");
    for(i = 0; i < 3; i++){
        printf(" ");
    }
    printf("ii.チキン南蛮定食\n");
    //最後の模様をforでループさせる
    for(i = 0; i < 10; i++){
        printf("＝");
    }
    printf("\n");
    return 0;
}

/*実行結果*/
// ====================
// ====    MENU    ====
// ====================
// 1. Recommended
//    i. 本日のスープ
//    ii.自家製版
// 2. Main Dishes
//    i. カレーライス
//    ii.チキン南蛮定食
// ＝＝＝＝＝＝＝＝＝＝