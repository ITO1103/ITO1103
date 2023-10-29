#include <stdio.h>
#include <math.h>
double calsSumofAp(int a, int d, int n){
    return (n/2)*(2*a + (n-1)*d);
}

int main(void){
    int a, d, n;
    double ans;
    a = 2;
    d = 3;
    n = 4;
    ans = calsSumofAp(a ,d ,n);

    printf("答えは%lfです\n",ans);
}