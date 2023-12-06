#include <stdio.h>
int main(void){
    double a=-1.1, b=4.2, c=-0.1;
    double *pA,*pB,*pC,*pMax;
    pA = &a;
    pB = &b;
    pC = &c;
    if(*pA > *pB){
        pMax = pA;
    }else if(*pB > *pC){
        pMax = pB;
    }else if(*pC > *pA){
        pMax = pC;
    }
    printf("最大値は%f\n", *pMax);
    return 0;
}