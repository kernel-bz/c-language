/*
	file name:	ch0208_inc01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	증감연산자
*/

#include <stdio.h>

main ()
{
	int n, x;

	n = 5;
	x = n++;
	printf("n=%d, x=%d\n", n, x);

	n = 5;
	x = ++n;
	printf("n=%d, x=%d\n", n, x);

	n = 5;
	x = n--;
	printf("n=%d, x=%d\n", n, x);

	n = 5;
	x = --n;
	printf("n=%d, x=%d\n", n, x);

	printf("Press any key to end...");
	getchar();
}
