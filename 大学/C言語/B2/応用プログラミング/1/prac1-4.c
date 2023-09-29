#include <stdio.h>

int main(void){
    int dim[][3] = {{85, 90, 75}, {90, 85, 80}};
    //        ↑なんでここだけ入れる必要あるん？

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("a[%d][%d] = %d\n",i,j,dim[i][j]);
        }
    }
}