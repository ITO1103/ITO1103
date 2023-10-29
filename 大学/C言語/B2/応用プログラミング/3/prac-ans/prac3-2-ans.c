#include <stdio.h>
#include <math.h>

int calcDiscriminant(int a, int b, int c)
{
	int D;
	D = b*b - (4 * a * c);
	return D;
}


int main(void)
{
	int a, b, c, D;
	printf("２次関数ax^2+bx+cのa,b,cを入力してください。\n");
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	printf("c="); scanf("%d", &c);
	D=calcDiscriminant(a, b, c);
	printf("%dx^2+%dx+%dは", a, b, c);
	if (D > 0)
		printf("異なる二つの実数解を持つ。\n");
	else if ( D == 0)
		printf("重解を持つ。\n");
	else
		printf("実数解を持たない。\n");
	return 0;
}

