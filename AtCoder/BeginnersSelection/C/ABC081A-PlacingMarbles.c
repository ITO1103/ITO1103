#include<stdio.h>

int main(void) {
  int cnt=0;
  char s[3];
  scanf("%s", s);
  for(int i=0;i<3;i++)
    cnt += s[i]=='1';
  printf("%d\n", cnt);
  return 0;
}
