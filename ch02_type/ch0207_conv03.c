/*
	file name:	ch0207_conv03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	Çüº¯È¯
*/

#include <stdio.h>

unsigned long int next = 1;

int rand (void)
{
   next = next * 1103515245 + 12345;
   return (unsigned int) (next/65536) % 32768;
}

void srand (unsigned int seed)
{
   next = seed;
}

main ()
{
	int n;

	srand (10);
	printf("seed=%d\n", next);

	n = rand ();
	printf("n=%d\n", n);

	n = rand ();
	printf("n=%d\n", n);

	n = rand ();
	printf("n=%d\n", n);

	n = rand ();
	printf("n=%d\n", n);

	printf("Press any key to end...");
	getchar();
}
