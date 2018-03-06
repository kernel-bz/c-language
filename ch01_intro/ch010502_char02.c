/*
ch010502_io_04.c
-------------------------------------------------------------------------------
	1.5.2 Character Counting
editted by Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
-------------------------------------------------------------------------------
*/
 #include <stdio.h>
/* count characters in input; 2nd version */
main()
{
   double nc;
   for (nc = 0; gechar() != EOF; ++nc)
       ;
   printf("%.0f\n", nc);
}

