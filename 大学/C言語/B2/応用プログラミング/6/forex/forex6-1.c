#include <stdio.h>
void func(void){
    int v = 0;
    printf("v(func)の値は%dです。\n",v);
}
int main(void){
    int v = 10;
    printf("v(main)の値は%dです。\n",v);
    func();
    printf("関数func呼び出し後のv(main)の値は%dです。\n",v);
    return 0;
}