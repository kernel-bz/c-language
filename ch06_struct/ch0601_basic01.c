/*
	file name:	ch0601_basic01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����ü �⺻
*/

#include <stdio.h>

int main ()
{
	//����ü ����
	struct point {
	   int x;
	   int y;
	};

	//����ü ����
	struct point pt;

	//����ü ���� �� �ʱⰪ �Ҵ�
	struct point maxpt = { 320, 200 };

	//����ü ����� �Ҵ�
	pt.x = 10;
	pt.y = 20;

	//����ü ����� ����
	printf ("pt: %d, %d\n", pt.x, pt.y);
	printf ("maxpt: %d, %d\n", maxpt.x, maxpt.y);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
