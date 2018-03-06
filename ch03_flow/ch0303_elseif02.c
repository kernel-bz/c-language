/*
	file name:	ch0303_elseif02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	else-if 문장, 이진탐색
*/

#include <stdio.h>


int binsearch (int x, int v[], int n) 
{ 
	int low, high, mid; 

	low = 0; 
	high = n - 1; 
	while (low <= high) { 
	   mid = (low+high)/2; 
	   if (x < v[mid]) 
		   high = mid + 1; 
	   else if (x  > v[mid]) 
		   low = mid + 1; 
	   else    //발견함
		   return mid; 
	} 
	return -1;   //발견하지 못함(실패)
} 


main ()
{
	int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int idx;

	idx = binsearch (7, v, 10);
	if (idx > 0)
		printf("finded idx=%d, value=%d\n", idx, v[idx]);
	else
		printf("not found\n");

	printf("\nPress any key to end...");
	getchar();
}
