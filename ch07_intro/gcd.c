/*
	file name:	gcd.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	최대 공약수(Greatest Common Divisor) 계산 알고리즘
*/

#include <stdio.h>


int gcd (int a, int b)
{
	if (b == 0) return a;
	if (a == 0) return b;

	printf("a is %d, b is %d\n", a, b);

	return gcd (b, a%b);
}


int main ()
{
	printf("GCD of 10 & 25 is %d\n", gcd (10, 25));
	
	printf("Press any key to end...");
	getchar();
	
	return 0;
}

