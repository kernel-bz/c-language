/*
	file name:	ch0212_seq01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	���� ����
*/

#include <stdio.h>

///base�� n��ŭ ����
///2�� n�� ���� == 2�� n��
///8�� n�� ���� == 8�� n��
int power (int base, int n)
{
    int i,  p;

	printf("n=%d\n", n);

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

main ()
{
	int n;

	n = 9;
	printf("n=%d, %d\n", n++, power(2, n));

	n = 9;
	n++;
	printf("n=%d, %d\n", n, power(2, n));

	n = 9;
	printf("n=%d, %d\n", ++n, power(2, n));

	n = 9;
	++n;
	printf("n=%d, %d\n", n, power(2, n));

	printf("\nPress any key to end...");
	getchar();
}
