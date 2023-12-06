#include <stdio.h>
int main(void){
    int a=0,b=100,tpm;
    int *pA,*pB;
    printf("befor:a=%d, b=%d\n", a, b);
    pA = &a;
    pB = &b;
    tpm = *pA;
    *pA = *pB;
    *pB = tpm;
    printf("after:a=%d, b=%d\n", a, b);
    return 0;
}