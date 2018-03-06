/*
ch010502_io_03.c
-------------------------------------------------------------------------------
	1.5.2 Character Counting
editted by Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
-------------------------------------------------------------------------------
*/
#include <stdio.h>
/* count characters in input; 1st version */
main()
{
   long nc;
   nc = 0;
   while (getchar() != EOF)
       ++nc;
   printf("%ld\n", nc);
}

