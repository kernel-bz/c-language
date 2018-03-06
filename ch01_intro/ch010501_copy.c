/*
ch010501_io_02.c
-------------------------------------------------------------------------------
	1.5.1 Input and Output (Copy)
editted by Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
-------------------------------------------------------------------------------
*/
#include <stdio.h>
/* copy input to output; 2nd version  */
main()
{
   int c;
   while ((c = getchar()) != EOF)
       putchar(c);
}

