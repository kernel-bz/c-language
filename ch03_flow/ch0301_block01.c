/*
	file name:	ch0301_block01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문장과 블럭
*/

#include <stdio.h>

main ()
{
	int i = 10;

	{
		int i = 0, x=0;
		i++;
		printf("i=%d, x=%d\n", i, x);
	}

	{
		float x = 3.14;
		printf("i=%d, x=%f\n", i, x);
	}

	printf("\nPress any key to end...");
	getchar();
}
