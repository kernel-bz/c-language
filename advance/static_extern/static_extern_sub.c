/**
	file name:	static_extern_sub.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	inline function
*/

#include <stdio.h>

void fn_test1 (void)
{
	printf("extern: %s\n", __func__);
}

void fn_extern (void)
{
	printf("extern: %s\n", __func__);
}
