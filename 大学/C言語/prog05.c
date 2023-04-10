#include <stdio.h>

int main(void)
{
    int hantei;

    printf("1999年は世紀末ですか？yesなら1，noなら0 => ");  
    scanf("%d", &hantei);

    if (hantei == 1) {
        printf("あなたの判定は正しいです\n");
    }
    else {
        printf("あなたの判定は間違いです\n");
    }

    return 0;
}
