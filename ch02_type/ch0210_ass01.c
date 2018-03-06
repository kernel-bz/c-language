/*
	file name:	ch0210_ass01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	할당 연산자
*/

#include <stdio.h>

main ()
{
	int i = 0, x, y;

	i += 2;     ///i = i + 2
	printf ("i=%d\n", i);

	x = 10;
	y = 20;
	x *= y + 1;  ///x = x * (y + 1)
	printf ("x=%d\n", x);

	x = 10;
	y = 20;
	x = x * y + 1;  ///x *= y + 1  ==> x = x * (y + 1)
	printf ("x=%d\n", x);

	printf("\nPress any key to end...");
	getchar();
}
