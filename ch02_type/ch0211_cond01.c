/*
	file name:	ch0211_cond01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	조건 표현
*/

#include <stdio.h>

main ()
{
    int  a = 10;
    int  b = 20;
    int  z, n;

    z = (a > b) ? a : b;
    printf ("z = %d\n", z);

    /**
    if (a > b)
        z = a;
    else
        z = b;
    */
	n = 10;
	printf("You have %d item%s.\n", n, n==1 ? "" : "s");

	/**
	if (n==1)
        s = "";
    else
        s = "s";
	*/

	n = 1;
	printf("You have %d item%s.\n", n, n==1 ? "" : "s");

	printf("\nPress any key to end...");
	getchar();
}
