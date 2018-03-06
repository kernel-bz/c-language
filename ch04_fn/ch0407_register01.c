/*
	file name:	ch0407_register01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�������� ������
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
	printf("address of m=%x", &m);  //���� m�� �ּ�
	//printf("address of idx=%d", &idx);  //�������� ������ �ּҰ� ����

	printf("\nPress any key to end...");
	getchar();
}
