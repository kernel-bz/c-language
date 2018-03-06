/*
	file name:	ch0408_block02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	블럭 구조
*/

#include <stdio.h>

static int x, y;
///const int x=10, y=20;

fn (double x)
{
    double y;

    y = x;
    printf ("y=%f\n", y);
}

main ()
{
    x = 10;
    y = 20;

    fn (2.71828);

    printf("\nPress any key to end...");
	getchar();
}
