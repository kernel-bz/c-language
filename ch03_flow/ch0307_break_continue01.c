/*
	file name:	ch0307_break_continue01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	break, continue πÆ¿Â
*/

#include <stdio.h>

main ()
{
	int i;

	for (i = 0; i < 10; i++) {
		if (i > 5) break;
		printf ("%d ", i);
	}
	printf ("\n");

	for (i = 0; i < 10; i++) {
		if (i < 5) continue;
		printf ("%d ", i);
	}
	printf ("\n");
	
	printf("\nPress any key to end...");
	getchar();
}
