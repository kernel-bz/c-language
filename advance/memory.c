/**
	file name:  memory.c
	author:		  Jung,JaeJoon(rgbi3307@nate.com) on the www.kernel.bz
	comments:
*/
#include <stdio.h>
#include <stdlib.h>

int gA;

void fn1(int a)
{
    int b = 10, c;

    c = a + b;
    printf("fn1(): a=%p, b=%p, c=%p\n", &a, &b, &c);
}

void fn2(int a)
{
    int b = 10, c;

    c = a + b;
    printf("fn2(): a=%p, b=%p, c=%p\n", &a, &b, &c);
}

int main()
{
    int a=10, b=20;

    int *pm = malloc(100);
    printf("pm=%p\n", pm);

    printf("gA=%p. main=%p, fn1=%p, fn2=%p\n", &gA, &main, &fn1, &fn2);
    printf("main(): a=%p, b=%p\n", &a, &b);
    fn1(a);
    fn2(b);

    free(pm);

    return 0;
}
