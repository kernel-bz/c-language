/*
	file name:	ch0406_static01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	고정 변수들
*/

#include <stdio.h>

void fn_test1 (void)
{
	int ia, ib;
	ia++;
	ib++;
	printf("fn_test1: %d, %d\n", ia, ib);
}

void fn_test2 (void)
{
	static int ia=10, ib=20;
	ia++;
	ib++;
	printf("fn_test2: %d, %d\n", ia, ib);
}

void fn_test3 (void)
{
	int ia, ib;
	ia++;
	ib++;
	printf("fn_test3: %d, %d\n", ia, ib);
}

void fn_test4 (void)
{
	static int ia=30, ib=40;
	ia++;
	ib++;
	printf("fn_test4: %d, %d\n", ia, ib);
}

int main ()
{
	fn_test1 ();
	fn_test2 ();
	fn_test3 ();
	fn_test4 ();
	printf("\n\n");

	fn_test1 ();
	fn_test2 ();
	fn_test3 ();
	fn_test4 ();
	printf("\n\n");

	fn_test1 ();
	fn_test2 ();
	fn_test3 ();
	fn_test4 ();

	printf("\nPress any key to end...");
	getchar();

	return 0;
}
