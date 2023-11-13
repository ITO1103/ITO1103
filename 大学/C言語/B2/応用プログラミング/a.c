#include <stdio.h>
#define N 5

double func1(int a[],int n);

void func2(int a[],int b[],int n){
    double ave;
    ave = (double)(a[n]+b[n])/2;
    printf("添え字%dの学生は数学%d点,英語%d点で、２科目の平均点は%f点です。\n",n,a[n],b[n],ave);
}

int main(void){
    int aa[N] = {56, 89, 75, 91, 80};
    int bb[N] = {86, 92, 52, 77, 90};
    double ave1, ave2;

    ave1 = func1(aa,N);
    ave2 = func1(bb,N); printf("数学の平均点は%f 点です。\n",ave1); printf("英語の平均点は%f 点です。\n",ave2);
    printf("ave1 のアドレスは%p,内容は%f です。\n" ,&ave1, ave1); printf("ave2 のアドレスは%p,内容は%f です。\n" ,&ave2, ave2);
    func2(aa,bb,1);
    return 0;
}

double func1(int a[],int n) {
    int i;
    double ans = 0.0;
    for ( i = 0; i < n; i++ )
    ans += (double)a[i]; ans /= n;
    return ans; 
}