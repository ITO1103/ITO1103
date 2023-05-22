#include<stdio.h>
int main(void)
{
    int a,b,c;
    char s[101];
    scanf("%d",&a);
    scanf("%d %d",&b,&c);
    scanf("%s",s);
    printf("%d %s\n",a+b+c,s);
    return 0;
}
