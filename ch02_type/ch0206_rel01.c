/*
	file name:	ch0206_rel01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	관계와 논리 연산자
*/
#include <stdio.h>

main ()
{
	int  i, lim;
	char c;

	i = 10;
	lim = 100;
	c = '\n';

	if (i < lim-1 && c != '\n' && c != EOF)
		printf("AND:true\n");
	else
		printf("AND:false\n");

	if (i < lim-1 || c != '\n' || c != EOF)
		printf("OR:true\n");
	else
		printf("OR:false\n");

	lim = !i;
	printf("lim = %d\n", lim);
	if (lim) printf("lim is true\n");
	if (lim == 0) printf("lim is false\n");
}

