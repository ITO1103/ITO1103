#include <stdio.h>
void swap(int x, int y) /*行頭のvoidはどうゆう意味？*/
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
int main(void)
{
	int s1=10, s2=20;
	printf("s1=%d, s2=%d\n", s1, s2);
	printf("swap\n");
	swap( s1, s2 );
	printf("s1=%d, s2=%d\n", s1, s2);
	return 0;
}
