/**
	file name:	static_extern_main.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	inline function
*/

#include <stdio.h>

extern void fn_extern (void);

static void fn_test1 (void)
{
	printf("%s\n", __func__);
}

void fn_test2 (void)
{
	printf("%s\n", __func__);
}

void fn_test3 (void)
{
	printf("%s\n", __func__);
}

void fn_test4 (void)
{
	printf("%s\n", __func__);
}

int main ()
{
    fn_test1 ();
    fn_test2 ();
    fn_test3 ();
    fn_test4 ();

    fn_extern();

    //printf ("%p, %p, %p, %p\n", &fn_test1, &fn_test2, &fn_test3, &fn_test4);

	//printf("\nPress any key to end...");
	//getchar();

	return 0;
}
