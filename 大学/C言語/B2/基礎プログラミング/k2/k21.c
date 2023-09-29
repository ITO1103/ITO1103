#include <stdio.h>
int main(void){
    char ch;
    printf("アルファベットを1文字入力してください。\n");
    ch = getchar();
    printf("%cを数値で表すと,8進数:%o,10進数:%d,16進数:%xです。\n",ch,ch,ch,ch);
    return 0;
}