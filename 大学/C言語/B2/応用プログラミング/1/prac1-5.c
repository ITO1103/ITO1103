#include <stdio.h>

int main(void){
    int a = 5;
    int b = 3;
    int c;

    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n",a,b);
}