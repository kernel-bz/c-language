/*
	file name:	ch0406_static02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	고정 변수들
*/

#include <stdio.h>

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

main ()
{
	int *a, *b;

	a = fn_test1 ();
	printf("a=%d, %d, %d\n", a[0], a[1], a[2]);

	b = fn_test2 ();
	printf("b=%d, %d, %d\n", b[0], b[1], b[2]);

	printf("a=%d, %d, %d\n", a[0], a[1], a[2]);

	printf("\nPress any key to end...");
	getchar();
}
