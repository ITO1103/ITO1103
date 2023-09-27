#include <stdio.h>
int main(void){
    double a, b, h, ans;
    
    printf("台形の上底の長さ（整数）を入力してください：");
    scanf("%lf", &a);
    printf("台形の下底の長さ（整数）を入力してください：");
    scanf("%lf", &b);
    printf("台形の高さ（整数）を入力してください：");
    scanf("%lf", &h);
    ans = (a + b) * h / 2.0;
    printf("台形の面積は %.2lf です。\n", ans);
    
    return 0;
}