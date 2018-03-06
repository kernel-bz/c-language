/*
	file name:	ch0401_basic02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	함수의 기초
*/

#include <stdio.h>

///함수선언
void fn_a (int a);
void fn_b (int b);
int fn_ab (int a, int b);

main ()
{
	int a = 10, b = 20;

	fn_a (a);
	fn_b (b);
	printf("a+b = %d\n", fn_ab (a, b));

	printf("\nPress any key to end...");
	getchar();
}

///함수 정의
void fn_a (int a)
{
	printf("a = %d\n", a);
}

///함수 정의
void fn_b (int b)
{
	printf("b = %d\n", b);
}

///함수 정의
int fn_ab (int a, int b)
{
	int c;

	c = a + b;

	return c;
}
