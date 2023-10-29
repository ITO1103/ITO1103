#include <stdio.h>
// void user_function( void );を追加
void user_function( void );
int main(void)
{
	user_function();
	return 0;
}
void user_function( void )
{
	puts("Hello!!!");
	return;
}
