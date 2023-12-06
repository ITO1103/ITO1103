#include <stdio.h>
int main(void)
{
	int *pA, a=3;
	int *pB, b = 4;
	int c;
	/*ここから*/
	pA = &a;
	pB = &b;
	c = *pA + *pB;
	/*ここまでの間を記述しなさい*/
	printf("%d + %d = %d\n", a, b, c );
	/*メモリマップ用追加*/
	printf("a=%d\n", a);
	printf("aのアドレス %p\n", &a);
	printf("b=%d\n", b);
	printf("bのアドレス %p\n", &b);
	printf("c=%d\n", c);
	printf("\n");
	printf("cのアドレス %p\n", &c);
	printf("pAのアドレス %p\n", &pA);
	printf("pAが指すアドレス %p\n", pA);
	printf("pAが指すアドレスの内容 %d\n", *pA);
	printf("pBのアドレス %p\n", &pB);
	printf("pBが指すアドレス %p\n", pB);
	printf("pBが指すアドレスの内容 %d\n", *pB);

	return 0;
}
