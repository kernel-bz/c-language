/*
	file name:	ch0305_while_for01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	반복 Loop(while, for) 문장
*/

#include <stdio.h>

main ()
{
	int i, j;

	i = 0;
	while (i < 10) {
		printf("%d ", i);
		i++;
	}
	printf("\n");

	for (i = 0; i < 10; i++)
		printf("%d ", i);
	printf("\n");

	i = 1;
	j = 1;
	while (i < 10) {
		printf("%d:%d ", j, i);
		j++;
		i *= 2;
	}
	printf("\n");

	for (i = 1, j = 1; i < 10; j++, i *= 2)
		printf("%d:%d ", j, i);
	printf("\n");

	printf("\nPress any key to end...");
	getchar();
}
