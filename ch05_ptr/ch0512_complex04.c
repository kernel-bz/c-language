/*
	file name:	ch0512_complex04.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	복잡한 포인터 이해, (*(*x[3])())[5]

	char (*(*x[3])())[5];
	x: array[3] of pointer to function returning  pointer to array[5] of char 
*/

#include <stdio.h>

char *fn1 ()
{
	static char *pa[5] = {"A001", "A002"};
	return *pa;
}

char *fn2 ()
{
	static char *pb[5] = {"B001", "B002", "B003"};
	return *(pb+1);
}

char *fn3 ()
{
	static char *pc[5] = {"C001", "C002", "C003", "C004"};
	return pc[2];
}

int main ()
{
	//char (*(*x[3])())[5] = {fn1, fn2, fn3};	
	char (*(*x[3])())[5] = {(char (*(*)())[5])fn1, (char (*(*)())[5])fn2, (char (*(*)())[5])fn3};	

	printf ("%s\n", x[0]());
	printf ("%s\n", x[1]());
	printf ("%s\n", x[2]());

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
