/*
	file name:	ch0504_ptr_arith01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ּ� ����
*/

#include <stdio.h>

int main ()
{
	//char���� ����Ű�� �������� ���̰�
	{
		char a[10];
		char *pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %d, %X, %X\n", pa2 - pa1, pa2, pa1);
	}

	//int���� ����Ű�� �������� ���̰�
	{
		int a[10];
		int *pa1, *pa2;

		pa1 = &a[0];
		pa2 = &a[10];
		printf("length = %d, %X, %X\n", pa2 - pa1, pa2, pa1);
	}

	//double���� ����Ű�� �������� ���̰�
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
