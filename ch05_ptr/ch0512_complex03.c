/*
	file name:	ch0512_complex03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	복잡한 포인터 이해, (*(*x())[])()

	char (*(*x())[])() 
    x: function returning pointer to array[] of  pointer to function returning char 
*/

#include <stdio.h>
 
char fn1 (void) { return 'A'; }
char fn2 (void) { return 'B'; }
char fn3 (void) { return 'C'; }
 
char (*(*x())[]) ()
{
	static char (*xa[]) () = {fn1, fn2, fn3};
	return (char (*(*)[])()) xa;
	//return xa;  //warning: return from incompatible pointer type
}
 
int main(void)
{
	char (*(*fpa)[]) ();

	fpa = x();

	printf("%c\n", (*fpa)[0]()); 
	printf("%c\n", (*fpa)[1]()); 
	printf("%c\n", (*fpa)[2]()); 

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
