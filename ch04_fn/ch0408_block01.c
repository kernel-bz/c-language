/*
	file name:	ch0408_block01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	블럭 구조
*/

#include <stdio.h>

main()
{
    int n = 10;
	int i = 20;

    if (n > 0) { 
        int i;  //새로운 변수 i 선언
 
        for (i = 0; i < n; i++) 
            printf ("%d ", i);
		printf ("\ni=%d\n", i);
	} else {
		int i = 30;
	}
    printf ("i=%d\n", i);

	printf("\nPress any key to end...");
	getchar();
}
