#include <stdio.h>
#define N 5

int calcTreble( int a );

int main(void)
{
  int mtx[ N ] = {5, 10, 15, 20, 25};
  int i, ans;

  for ( i = 0; i < N; i++ ){
    ans = calcTreble( mtx[ i ] );
    printf("%dの3倍は%dです\n", mtx[i],ans );
  }
  return 0;
}
    
int calcTreble( int a )
{
  return 3 * a;
}

