/*
	file name:	ch0504_ptr_arith01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	주소 연산
*/

#include <stdio.h>

int main ()
{
	//char형을 가르키는 포인터의 차이값
	{
		char a[10];
		char *pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %d, %X, %X\n", pa2 - pa1, pa2, pa1);
	}

	//int형을 가르키는 포인터의 차이값
	{
		int a[10];
		int *pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %d, %X, %X\n", pa2 - pa1, pa2, pa1);
	}

	//double형을 가르키는 포인터의 차이값
	{
		double a[10];
		double *pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %d, %X, %X\n", pa2 - pa1, pa2, pa1);
	}

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
