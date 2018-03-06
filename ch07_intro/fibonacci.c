/*
	file name:	fibonacci.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	피보나치 수열
*/

#include <stdio.h>

long fib (long num)
{
	if (num == 0 || num == 1) return num;
	
	return (fib (num - 1) + fib (num - 2));
}

int main ()
{
	int i, n = 10;

	printf("Print a Fibonacci series.\n");
	for (i = 0; i < n; i++)
		printf("%6ld", fib (i));

	printf("\nPress any key to end...");
	getchar();

	return 0;
}
