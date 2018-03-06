/*
	file name:	function_pointer.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	함수 포인터 이해
*/

#include <stdio.h>

int compare_int (void* ptr1, void* ptr2)
{
	if (*(int*)ptr1 >= *(int*)ptr2)
		return 1;
	else 
		return -1;
}

int compare_float (void* ptr1, void* ptr2)
{
	if (*(float*)ptr1 >= *(float*)ptr2)
		return 1;
	else 
		return -1;
}

void* larger (void* ptr1, void* ptr2, int (*pfn_compare)(void*, void*))
{
	if ((*pfn_compare) (ptr1, ptr2) > 0)  //함수 포인터 호출
		return ptr1;
	else 
		return ptr2;
}

int main ()
{
	{
		int ia = 7;
		int ib = 8;
		int ic;

		ic = (*(int*) larger (&ia, &ib, compare_int));
		printf ("Larger value is: %d\n", ic);
	}
	{
		float fa = 3.1415;
		float fb = 2.7182;
		float fc;

		fc = (*(float*) larger (&fa, &fb, compare_float));
		printf ("Larger value is: %f\n", fc);
	}

	printf ("\nPress any key to end...");
	getchar();

	return 0;
}
