#include <stdio.h>
int main(void){
    int *pA, a=3;
    pA = &a;
    printf("ポインタpAのアドレスは%p\n", &pA);
    printf("ポインタpAのもつアドレスは%p\n", pA);
    printf("変数aのアドレスは%p\n", &a);
    printf("変数aの値は%d\n", a);
    return 0;
}