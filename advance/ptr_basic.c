/**
	file name:  ptr_basic.c
	author:		  Jung,JaeJoon(rgbi3307@nate.com) on the www.kernel.bz
	comments:
*/
#include <stdio.h>
#include <stdlib.h>

void fa(void)
{
    int i;
    char a[5] = {'a', 'b', 'c', 'd', 'e'};
    char *pa = a;

    printf("size: *pa=%d, pa=%d\n", sizeof(*pa), sizeof(pa));
    for(i=0; i < 5; i++) {
        printf("a: addr=%p, data=%c\n", pa, *pa);
        pa++;
    }
}

void fb(void)
{
    int i;
    int b[5] = {10, 20, 30, 40, 50};
    int *pb = b;

    printf("size: *pb=%d, pb=%d\n", sizeof(*pb), sizeof(pb));
    for(i=0; i < 5; i++) {
        printf("b: addr=%p, data=%d\n", pb, *pb);
        pb++;
    }
}

void fc(void)
{
    int i;
    long long c[5] = {100, 200, 300, 400, 500};
    long long *pc = c;

    printf("size: *pc=%d, pc=%d\n", sizeof(*pc), sizeof(pc));
    for(i=0; i < 5; i++) {
        printf("c: addr=%p, data=%lld\n", pc, *pc);
        pc++;
    }
}

int main()
{
    fa();
    fb();
    fc();

    return 0;
}
