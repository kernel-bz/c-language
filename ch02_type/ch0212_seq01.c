/*
	file name:	ch0212_seq01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	연산 순위
*/

#include <stdio.h>

///base을 n만큼 곱함
///2를 n번 곱합 == 2의 n승
///8를 n번 곱합 == 8의 n승
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
