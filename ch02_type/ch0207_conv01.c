/*
	file name:	ch0207_conv01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	Çüº¯È¯
*/

#include <stdio.h>

main ()
{
	char c;
	int  i;
	float x;
	double d;

	c = 'A';    ///65
	i = c;      ///65
	c = i;      ///65
	printf("c=%c\n", c);    ///65=='A'

	i = 10;
	x = i;      ///10.0
	i = x;      ///10
	printf("i=%d\n", i);    ///10

	x = 3.14;
	i = x;      ///3
	printf("x=%f, i=%d, i=%f\n", x, i, (float)i);

	d = 2.718259238;
	x = d;      ///2.718259238;
	printf("d=%1.9f, x=%1.9f\n", d, x);

	d = (double)i;  ///3
	printf("d=%f\n", d);

	printf("Press any key to end...");
	getchar();
}
