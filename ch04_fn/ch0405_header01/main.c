/*
	file name:	ch0405_header01/main.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	외부 변수
*/

#include <stdio.h>
#include "ch0405.h" ///header file

int main ()
{
	printf("fn_a(): %d\n", fn_a ());
	printf("fn_b(): %d\n", fn_b (30, 40));
	printf("fn_c(): %d\n", fn_c ());

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
