/*
	file name:	ch0602_struct_fn01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체와 함수(구조체 복사)
*/

#include <stdio.h>

#define XMAX 320
#define YMAX 200

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

//멤버변수 할당후 구조체 반환
struct point makepoint (int x, int y)
{
   struct point temp;
   temp.x = x;
   temp.y = y;
   return temp;
}

//구조체를 전달받아 멤버값을 더한후 다시 반환
struct point addpoint (struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

int main ()
{
	//구조체 정의
	struct rect screen;
	struct point middle;

	screen.pt1 = makepoint (0,0);
	screen.pt2 = makepoint (XMAX, YMAX);
	middle = makepoint ((screen.pt1.x + screen.pt2.x)/2,
					    (screen.pt1.y + screen.pt2.y)/2);

	printf ("middle: %d, %d\n", middle.x, middle.y);

	screen.pt1 = addpoint (screen.pt1, middle);
	printf ("screen.pt1: %d, %d\n", screen.pt1.x, screen.pt1.y);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
