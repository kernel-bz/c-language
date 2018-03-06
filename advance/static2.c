/**
	file name:	static2.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	static 변수들
*/

#include <stdio.h>

int gA;

int *fn_test1 (void)
{
	//static int arr[3];
	int arr[3];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	return arr;
}

int *fn_test2 (void)
{
	//static int arr[3];
	int arr[3];

	arr[0] = 10;
	arr[1] = 11;
	arr[2] = 12;

	return arr;
}

int main ()
{
	int *a, *b;

	printf("gA=%p\n", &gA);

	a = fn_test1 ();
	printf("a=%p, %d, %d, %d\n", a, a[0], a[1], a[2]);

	b = fn_test2 ();
	printf("b=%p, %d, %d, %d\n", b, b[0], b[1], b[2]);

	printf("a=%p, %d, %d, %d\n", a, a[0], a[1], a[2]);

	//printf("\nPress any key to end...");
	//getchar();
	return 0;
}
