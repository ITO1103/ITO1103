#include <stdio.h>
int main(void)
{
    printf("8進数の%dは10進数の%oです。\n",'\x3B','\073');
    printf("16進数の%xは10進数の%dです。\n",'\075','\x3d');
    return 0;
}