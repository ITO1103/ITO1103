#include <stdio.h>
#define N 3

void getave4(int *p, double *result, int n);

int main(void){
    int a[] = {5,9,3};
    double result;
    getave4(a,&result,N);
    printf("%f\n",result);
    return 0;
}

void getave4(int *p, double *result, int n){
    int i;
    double rv = 0.0;
    for(i=0;i<n;i++){
        rv += *(p+i);
    }
    *result =  rv/n;
}
