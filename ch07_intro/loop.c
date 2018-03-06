/*
	file name:	loop.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	반복, 루프(Loop), 재귀호출
*/

#include <stdio.h>

#define nSIZE	8

//n * n
unsigned int loop01 (int n)
{
	int i, j;
	unsigned int ucnt = 0;
	
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			ucnt++;
	return ucnt;
}

//n(n+1)/2
unsigned int loop02 (int n)
{
	int i, j;
	unsigned int ucnt = 0;

	for (i = 0; i < n; i++)
		for (j = i; j < n; j++)
			ucnt++;
	return ucnt;
}

//n(lg(n)+1)
unsigned int loop03 (int n)
{
	int i, j;
	unsigned int ucnt = 0;

	for (i = 0; i < n; i++)
		for (j = 1; j <= n; j*=2)
			ucnt++;
	return ucnt;
}

//n(lg(n)+1)
unsigned int loop04 (int n)
{
	int i, j;
	unsigned int ucnt = 0;

	for (i = 0; i < n; i++)
		for (j = n; j > 0; j/=2)
			ucnt++;
	return ucnt;
}

//n
unsigned int loop05 (int n)
{
	static unsigned int ucnt = 0;

	if (n > 0) {
		ucnt++;
		--n;
		loop05 (n);
	}
	return ucnt;
}

//height(h) = n
//total nodes = 2^h - 1
unsigned int loop06 (int n)
{
	static unsigned int ucnt = 0;

	if (n > 0) {
		ucnt++;
		--n;
		loop06 (n);
		loop06 (n);
	}
	return ucnt;
}

//height(h) = lg(n) + 1
//total nodes = 2^h - 1
unsigned int loop07 (int n)
{
	static unsigned int ucnt = 0;

	if (n > 0) {
		ucnt++;
		n /= 2;
		loop07 (n);
		loop07 (n);
	}
	return ucnt;
}

int main (int argc, char *argv[])
{
	int n;

	if (argc > 1) n = atoi(argv[1]);
	else n = nSIZE;

	printf ("nSIZE  = %d\n", n);
	printf ("loop01 = %d\n", loop01 (n));
	printf ("loop02 = %d\n", loop02 (n));
	printf ("loop03 = %d\n", loop03 (n));
	printf ("loop04 = %d\n", loop04 (n));
	printf ("loop05 = %d\n", loop05 (n));
	printf ("loop06 = %d\n", loop06 (n));
	printf ("loop07 = %d\n", loop07 (n));

	printf ("\nPress any key to end...");
	getchar();
	return 0;
}
