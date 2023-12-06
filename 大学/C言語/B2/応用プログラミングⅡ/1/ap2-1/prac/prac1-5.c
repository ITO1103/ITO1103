#include <stdio.h>
int main(void){
    int *pA, a=3;
    int *pB, b=4;
    int c;

    pA = &a;
    pB = &b;
    c = *pA + *pB;

    printf("%d + %d = %d\n",a,b,c);
    return 0;
}