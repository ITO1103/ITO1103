#include <stdio.h>
int main(void){
    int a,b,eval;
    a = 3;
    b = 5;
    //a
    eval = a + 4 * b;
    printf("[a]%d\n",eval);a = 3;
    //b
    eval = (a + 4) * b;
    printf("[b]%d\n",eval);a = 3;
    //c
    eval = a++ + b;
    printf("[c]%d\n",eval);a = 3;
    //d
    eval = ++a + b;
    printf("[d]%d\n",eval);a = 3;
    //e
    eval = b = a++;
    printf("[e]%d\n",eval);a = 3;
    //f
    eval = b = ++a;
    printf("[f]%d\n",eval);a = 3;
    //g
    eval = b / 2 + a;
    printf("[g]%d\n",eval);a = 3;
    //h
    eval = b % 2 + a;
    printf("[h]%d\n",eval);a = 3;
    //i
    eval = b * a / 2;
    printf("[i]%d\n",eval);a = 3;
    //j
    eval = b * (a / 2);
    printf("[j]%d\n",eval);a = 3;
    //k
    eval = a + b * a + b;
    printf("[k]%d\n",eval);a = 3;
    //l
    eval = (a + b) * (a + b);
    printf("[l]%d\n",eval);a = 3;


}