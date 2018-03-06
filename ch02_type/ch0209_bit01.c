/*
	file name:	ch0209_bit01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	��Ʈ ������
*/

#include <stdio.h>

#define SET_ON 0177

unsigned getbits (unsigned x, int p, int n)
{
   return (x >> (p+1-n)) & ~(~0 << n);
}

main ()
{
	int	n, x, n2, x2, x3;

	n = 0200;  //0x80
	x = 0200;  //0x80
	printf("n=%o, %X, %d\n", n, n, n);
	printf("x=%o, %X, %d\n\n", x, x, x);

	//AND, OR ��Ʈ����
	n2 = n & SET_ON;
	x2 = x | SET_ON;

	printf("n2=%o, %X, %d\n", n2, n2, n2);
	printf("x2=%o, %X, %d\n\n", x2, x2, x2);

	//��Ÿ�� OR����
	x3 = n ^ x;
	printf("x3=%o, %X, %d\n\n", x3, x3, x3);

	//����Ʈ ����
	n2 = n << 2;
	x2 = n >> 2;
	printf("n2=%o, %X, %d\n", n2, n2, n2);
	printf("x2=%o, %X, %d\n\n", x2, x2, x2);

	//����
	x2 = ~n;
	printf("x2=%o, %X, %d\n", x2, x2, x2);

	//4��°���� 3���� ��Ʈ ��������
	n2 = getbits (x2, 4, 3);
	printf("n2=%o, %X, %d\n", n2, n2, n2);

	printf("\nPress any key to end...");
	getchar();

}
