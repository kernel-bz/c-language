/*
	file name:	ch0602_struct_fn02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����ü�� �Լ�(����ü �������)
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

//����ü str ����
struct str {
	int len;
	char *str;
};

//����ü�� �����ͷ� �޾Ƽ� ����� �Ҵ�
void makepoint (struct point *pp, int x, int y)
{
	pp->x = x;  //(*pp).x = x;
	pp->y = y;  //(*pp).y = y;
}

int main ()
{
	//����ü ���� �� ������ �Ҵ�
	struct rect r, *rp=&r;
	struct str s, *p=&s;

	makepoint (&rp->pt1, 10, 20);
	makepoint (&rp->pt2, XMAX, YMAX);
   
	//��� ����
	printf ("r.pt1.x: %d, %d, %d, %d\n", r.pt1.x, (r.pt1).x, rp->pt1.x, (rp->pt1).x);

	//����ü ������ .�� ->�� �Ѵ� ()�� []ó�� ������ ������� ���� ����
	++rp->pt1.x; //++((rp->pt1).x) x�� ������
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
