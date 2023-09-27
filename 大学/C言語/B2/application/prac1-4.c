#include <stdio.h>

int main(void){
    int dim[][] = {{85, 90, 75}, {90, 85, 80}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("a[%d][%d] = %d",i,j,dim[i][j]);
        }
    }
}