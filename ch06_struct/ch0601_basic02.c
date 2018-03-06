/*
	file name:	ch0601_basic02.c
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

	//����ü���� ����ü(��ø) ����
	struct rect {
		struct point pt1;
		struct point pt2;
	};

	//����
	struct rect screen;

	//����
	screen.pt1.x = 10;
	screen.pt1.y = 20;

	screen.pt2.x = 300;
	screen.pt2.y = 180;

	//����ü ����� ����
	printf ("screen: %d, %d, %d, %d\n"
			, screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
