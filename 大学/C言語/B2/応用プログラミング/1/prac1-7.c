#include <stdio.h>

int main(void){
    int max = 0;
    int dim[] = {2, 5, 8};

    for(int i=0;i<3;i++){
        if(max<dim[i]){
            max = dim[i];
        }
    }

    printf("最大値は%dです\n",max);
}