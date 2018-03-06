/*
	file name:	ch0601_basic01.c
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

	//구조체 정의
	struct point pt;

	//구조체 정의 및 초기값 할당
	struct point maxpt = { 320, 200 };

	//구조체 멤버값 할당
	pt.x = 10;
	pt.y = 20;

	//구조체 멤버값 참조
	printf ("pt: %d, %d\n", pt.x, pt.y);
	printf ("maxpt: %d, %d\n", maxpt.x, maxpt.y);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
