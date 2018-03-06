/*
	file name:	ch0601_basic02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체 기본
*/

#include <stdio.h>

int main ()
{
	//구조체 선언
	struct point {
	   int x;
	   int y;
	};

	//구조체안의 구조체(중첩) 선언
	struct rect {
		struct point pt1;
		struct point pt2;
	};

	//정의
	struct rect screen;

	//참조
	screen.pt1.x = 10;
	screen.pt1.y = 20;

	screen.pt2.x = 300;
	screen.pt2.y = 180;

	//구조체 멤버값 참조
	printf ("screen: %d, %d, %d, %d\n"
			, screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
