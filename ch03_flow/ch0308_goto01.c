/*
	file name:	ch0308_goto01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	goto 문장
*/

#include <stdio.h>

main ()
{
	int i, j, found;
	int a[] = {1, 3, 5, 7, 9, 10};
	int b[] = {2, 4, 6, 8, 10};

	//goto문으로 중첩된 루프 탈출
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++) {
			printf("%d ", j);
			if (j > 5)
				goto Error;
		}
	printf("\nThis is the end of loop.\n");

Error:
	printf("\nThis is the Error label.\n\n");

	//goto문을 사용하여 분기
	for (i = 0; i < 6; i++)
	   for (j = 0; j < 5; j++)
		   if (a[i] == b[j])
			   goto Found;
    printf("This is the end of loop.\n");

Found:
	printf("Found(%d,%d)\n", i, j);

	//goto문을 사용하지 않고 분기
	found = 0;
	for (i = 0; i < 6 && !found; i++)
	   for (j = 0; j < 5 && !found; j++)
		   if (a[i] == b[j])
			   found = 1;
    printf("\nThis is the end of loop.\n");
	if (found)
		printf("found(%d,%d)\n", i, j);
	else
		printf("Does not found(%d,%d)\n", i, j);

	printf("\nPress any key to end...");
	getchar();
}
