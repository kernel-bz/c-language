/*
	file name:	ch0506_ptr_array01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	포인터 배열
*/

#include <stdio.h>

int main ()
{
	char *p0 = "This is p0";
	char *p1 = "This is p1";
	char *p2 = "This is p2";
	char *ptrs[3];  //포인터 배열
	int i;

	//각각의 포이터를 포인터 배열에 저장
	ptrs[0] = p0;
	ptrs[1] = p1;
	ptrs[2] = p2;

	for (i = 0; i < 3; i++)
		printf ("%s\n", ptrs[i]);
	
	printf("\nPress any key to end...");
	getchar();
}
