/*
	file name:	ch0408_block01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�� ����
*/

#include <stdio.h>

main()
{
    int n = 10;
	int i = 20;

    if (n > 0) { 
        int i;  //���ο� ���� i ����
 
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
