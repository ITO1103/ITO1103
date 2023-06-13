#include <stdio.h> 
int main (void)
{
    int iql,mon,dow,num,i;

    for(i = 0;i < 15; i++){
        printf("=");
    }

    printf("\n");
    printf("    April\n");

    for(i = 0;i < 15; i++){
        printf("=");
    }
    printf("\n");

    printf("Sun Mon Tus Wed Thr Fri Sat\n");
    printf("                          1\n");

    for(num = 2; num <= 30; num++){
        printf("%3d ",num);
        if(num % 7 == 1){
            printf("\n");
        }
    }
    printf("\n");

}





// ===============
//     April
// ===============
// Sun Mon Tue Wed Thr Fri Sat
//                          1
//   2   3   4   5   6   7   8
//   9  10  11  12  13  14  15
//  16  17  18  19  20  21  22
//  23  24  25  26  27  28  29
//  30