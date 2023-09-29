#include <stdio.h>
int main(void){
    char ch;
    printf("アルファベット1文字を入力しなさい:");
    ch = getchar();
    printf("あなたが入力した文字は%c\n対応するアスキーコードは(10進数)%dです\n",ch,ch);
    return 0;
}