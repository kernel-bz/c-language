/*
	file name:	ch0410_recur01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	¿Á±Õ »£√‚
*/

#include <stdio.h>

void printd (int n)
{
   if (n < 0) {
       putchar('-');
       n = -n;
   }
   if (n / 10)
       printd(n / 10);

   putchar(n % 10 + '0');
}

main ()
{
	printd (123);

	printf("\nPress any key to end...");
	getchar();
}
