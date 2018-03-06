/*
	file name:	ch0407_register01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	레지스터 변수들
*/

#include <stdio.h>

int fn_test (register unsigned m)
{
	register unsigned i;

	for (i = 0; i < m; i++)
		printf("%d ", i);
	printf("\n");

	return i;
}

int main ()
{
	unsigned int m;
	register int idx;

	m = 10;
	idx = fn_test (m);
	printf("idx=%d\n", idx);
	printf("address of m=%x", &m);  //변수 m의 주소
	//printf("address of idx=%d", &idx);  //레지스터 변수는 주소가 없음

	printf("\nPress any key to end...");
	getchar();
}
