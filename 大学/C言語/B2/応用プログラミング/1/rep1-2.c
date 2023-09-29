/*rep1-2.c*/
#include <stdio.h>
int main(void){
    int i,key,num = 5,elm = -1,dim[] = {25,13,10,56,78};
    printf("key = ");
    scanf("%d",&key);

    /*検出処理の記述*/
    for(i=0;i<num;i++){
        if(key == dim[i]){
            elm = i;
        }
    }

    if(elm != -1){
        printf("dim[%d]FOUND\n",elm);
    }else{
        printf("NOT FOUND!\n");
    }
    return 0;
}