/*
	file name:	ch0403_external01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	외부 변수
*/

#include <stdio.h>

///외부 변수
int gA = 50;
int gB = 60;

int fn_a ()
{
	///내부 변수
	int a = 10;
	int b = 20;

	return a + b + gA;
}

int fn_b (int a, int b)
{
	return a + b + gB;
}

int fn_c ()
{
	return gA + gB;
}

int main ()
{
	printf("fn_a(): %d\n", fn_a ());
	printf("fn_b(): %d\n", fn_b (30, 40));
	printf("fn_c(): %d\n", fn_c ());

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
