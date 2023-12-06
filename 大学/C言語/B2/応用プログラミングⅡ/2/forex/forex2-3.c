#include <stdio.h>
void swap(int *x, int *y) /*仮引数をポインタとして宣言*/
{
	int tmp;
	tmp = *x;	/*変更*/
	*x = *y; 	/*変更*/
	*y = tmp; 	/*変更*/
	printf("&x = %p, &y = %p, &tmp = %p\n", &x, &y, &tmp);
	printf("x = %p, y = %p\n", x, y);
}
int main(void)
{
	int s1=10, s2=20;
	printf("s1=%d, s2=%d\n", s1, s2);
	printf("swap\n");
	swap( &s1, &s2 ); /*実引数にアドレス演算子付加*/
	printf("s1=%d, s2=%d\n", s1, s2);
	printf("&s1 = %p, &s2 = %p\n", &s1, &s2);
	return 0;

}
