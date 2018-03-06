/*
	file name:	ch0602_struct_fn02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����ü�� �Լ�(����ü�� �����ͷ� ����)
*/

#include <stdio.h>

#define XMAX 320
#define YMAX 200

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

//����ü�� �����ͷ� �޾Ƽ� ����� �Ҵ�
void makepoint (struct point *pp, int x, int y)
{
	pp->x = x;  //(*pp).x = x;
	pp->y = y;  //(*pp).y = y;
}

//����ü�� �����ͷ� �޾Ƽ� ����� ����
void addpoint (struct point *pp1, struct point *pp2)
{
	pp1->x += pp2->x;
	pp1->y += pp2->y;
}

int main ()
{
	//����ü ����
	struct rect screen;
	struct point middle;

	//����ü ��� ������(. ->)�� ������ ������(& *)���� �켱������ ����
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
