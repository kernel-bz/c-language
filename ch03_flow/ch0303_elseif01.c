/*
	file name:	ch0303_elseif01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	if-else πÆ¿Â
*/

#include <stdio.h>

main ()
{
	int a, b, c, d;

	a=10;  b=20;  c=30;  d=40;

	if (a > b) 
		printf("a=%d\n", a);
	else if (b > c) 
		printf("b=%d\n", b);
	else if (c > d) 
		printf("c=%d\n", c);
	else if (d > a) 
		printf("d=%d\n", d);
	else 
		printf("default\n");

	printf("\nPress any key to end...");
	getchar();
}
