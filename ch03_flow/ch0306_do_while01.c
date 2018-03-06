/*
	file name:	ch0306_do_while01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	반복 Loop(do-while) 문장
*/

#include <stdio.h>

main ()
{
	int n = 25203307;
	char s;

	do {
	   s = n % 10 + '0';
	   printf("s=%c\n", s);
	} while ((n /= 10) > 0);

	printf("\nPress any key to end...");
	getchar();
}
