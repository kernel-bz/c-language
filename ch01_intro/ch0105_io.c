/*
ch0105_io_01.c
-------------------------------------------------------------------------------
	1.5 Input and Output
editted by Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
-------------------------------------------------------------------------------
*/
#include <stdio.h>
   /* copy input to output; 1st version  */
   main()
   {
       int c;
       c = getchar();
       while (c != EOF) {
           putchar(c);
           c = getchar();
       }
   }

