/*
	file name:	ch0401_basic02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�Լ��� ����
*/

#include <stdio.h>

///�Լ�����
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

///�Լ� ����
void fn_a (int a)
{
	printf("a = %d\n", a);
}

///�Լ� ����
void fn_b (int b)
{
	printf("b = %d\n", b);
}

///�Լ� ����
int fn_ab (int a, int b)
{
	int c;

	c = a + b;

	return c;
}
