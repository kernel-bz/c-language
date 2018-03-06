#include <stdio.h>

void fn_test1 (void)
{
	printf("extern: %s\n", __func__);
}

void fn_extern (void)
{
	printf("extern: %s\n", __func__);
}

