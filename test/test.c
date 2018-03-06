#include <stdio.h>

int main(void)
{
	unsigned long d = 0x23178;
	unsigned long c = ~3;
	unsigned long r = d & c;

	printf("d=%X, c=%X, r=%X\n", d, c, r);
	
	return 0;
}
