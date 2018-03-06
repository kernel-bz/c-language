/*
	file name:	ch0404_scope01/main.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	외부 변수
*/

#include <stdio.h>

//외부 변수
int gA = 50;
int gB = 60;

int fn_a ();
int fn_b (int a, int b);
int fn_c (int a, int b);

int main ()
{
	printf("fn_a(): %d\n", fn_a ());
	printf("fn_b(): %d\n", fn_b (30, 40));
	printf("fn_c(): %d\n", fn_c (gA, gB));

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
