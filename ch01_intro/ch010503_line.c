/*
ch010503_line.c
-------------------------------------------------------------------------------
	1.5.3 Line Counting
editted by Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
-------------------------------------------------------------------------------
*/
#include <stdio.h>
/* count lines in input */
main()
{
   int c, nl;
   nl = 0;
   while ((c = getchar()) != EOF)
       if (c == '\n')
           ++nl;
   printf("%d\n", nl);
}

