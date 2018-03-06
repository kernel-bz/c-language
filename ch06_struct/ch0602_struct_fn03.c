/*
	file name:	ch0602_struct_fn02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체와 함수(구조체 연산순위)
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

//구조체 str 선언
struct str {
	int len;
	char *str;
};

//구조체를 포인터로 받아서 멤버값 할당
void makepoint (struct point *pp, int x, int y)
{
	pp->x = x;  //(*pp).x = x;
	pp->y = y;  //(*pp).y = y;
}

int main ()
{
	//구조체 정의 및 포인터 할당
	struct rect r, *rp=&r;
	struct str s, *p=&s;

	makepoint (&rp->pt1, 10, 20);
	makepoint (&rp->pt2, XMAX, YMAX);
   
	//모든 같음
	printf ("r.pt1.x: %d, %d, %d, %d\n", r.pt1.x, (r.pt1).x, rp->pt1.x, (rp->pt1).x);

	//구조체 연산자 .과 ->는 둘다 ()와 []처럼 연산자 운선순위가 가장 높다
	++rp->pt1.x; //++((rp->pt1).x) x가 증가됨
	printf ("%d\n", rp->pt1.x);

	p->len = 5;
	p->str = "test";

	++p->len;
	printf ("%d\n", p->len);
	*p->str++;
	printf ("%s\n", p->str);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
