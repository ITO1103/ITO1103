#include<stdio.h>
#define N 5 /*配列要素数（main関数で使用可能。func1では使わないこと)*/
/*問題⑤解答*/
void func2(int a[],int b[],int n );

/*問題①解答*/
double func1(int a[],int n)
{
    int i;
    double ans = 0.0;
    for ( i = 0; i < n; i++ )
        ans += (double)a[i];
    ans /= n;
    return ans;
}

int main(void)
{
    int aa[ N ] = {56, 89, 75, 91, 80};
    int bb[ N ] = {86, 92, 52, 77, 90};
    double ave1, ave2;

    /*問題②解答*/
    ave1 = func1(aa,N);
    ave2 = func1(bb,N);
    
    
    
    printf("数学の平均点は%f点です。\n",ave1);
    printf("英語の平均点は%f点です。\n",ave2);

    /*問題③解答*/
    printf("ave1のアドレスは%p,内容は%fです。\n", &ave1, ave1);
    printf("ave2のアドレスは%p,内容は%fです。\n", &ave2, ave2);

    /*問題④解答*/
    func2(aa, bb, 2);
    

    return 0;
}

void func2( int a[], int b[], int n )
{
    double ave;
    ave = (double)(a[n] + b[n]) / 2.0;
    printf("学生%dは数学%d点，英語%d点で、2科目の平均点は%f点です。\n", n+1, a[n], b[n], ave );
}
