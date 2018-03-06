/*
	file name:	ch0304_switch01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	switch πÆ¿Â
*/

#include <stdio.h>

main ()
{
	char c = '8';

	switch (c) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
				printf("c is digit\n");
            	break;
        case ' ':
        case '\n':
        case '\t':
				printf("c is white space\n");
				break;
        default:
				printf("c is default\n");
		break;
	}

	c = '\t';

	if (c >= '0' && c <= '9')
		printf("c is digit\n");
	else if (c == ' ' || c == '\n' || c == '\t')
		printf("c is white space\n");
	else
		printf("c is default\n");

	printf("\nPress any key to end...");
	getchar();
}

