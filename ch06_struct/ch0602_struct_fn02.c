/*
	file name:	ch0602_struct_fn02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체와 함수(구조체를 포인터로 전달)
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

//구조체를 포인터로 받아서 멤버값 할당
void makepoint (struct point *pp, int x, int y)
{
	pp->x = x;  //(*pp).x = x;
	pp->y = y;  //(*pp).y = y;
}

//구조체를 포인터로 받아서 멤버값 더함
void addpoint (struct point *pp1, struct point *pp2)
{
	pp1->x += pp2->x;
	pp1->y += pp2->y;
}

int main ()
{
	//구조체 정의
	struct rect screen;
	struct point middle;

	//구조체 멤버 연산자(. ->)는 포인터 연산자(& *)보다 우선순위가 높음
	makepoint (&screen.pt1, 0, 0);
	makepoint (&screen.pt2, XMAX, YMAX);
	makepoint (&middle
			  , (screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);

	printf ("middle: %d, %d\n", middle.x, middle.y);

	addpoint (&screen.pt1, &middle);
	printf ("screen.pt1: %d, %d\n", screen.pt1.x, screen.pt1.y);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
