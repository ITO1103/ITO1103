#include <stdio.h>

int main(void){
    int dim[] = {2, 5, 8};

    for(int i=0;i<3;i++){
        printf("dim[%d] = %d\n",i,dim[i]);
    }
    return 0;
}