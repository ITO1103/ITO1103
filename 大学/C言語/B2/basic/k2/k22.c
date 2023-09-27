#include <stdio.h>
int main(void){
    int x,y,z;
    x = 8;
    y = 114;
    printf("入れ替え前：X=%d,Y=%d\n",x,y);
    z = x;
    x = y;
    y = z;
    printf("入れ替え後：X=%d,Y=%d\n",x,y);
    return 0;
}