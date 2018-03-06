/*
	file name:	ch0607_struct_bit01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체 비트 필드
*/

#include <stdio.h>

struct {
	unsigned int is_keyword : 1;
	unsigned int is_extern  : 1;
	unsigned int is_static  : 1;
} flags;

struct {
	unsigned int b1 : 4;
	unsigned int b2 : 4;
	unsigned int b3 : 4;
	unsigned int b4 : 4;
	unsigned int b5 : 4;
	unsigned int    : 8;  //명칭없이 padding
	unsigned int b6 : 2;
	unsigned int b7 : 2;
	unsigned int    : 8;  //명칭없이 padding
} flags2;

int main ()
{
	printf ("size of flags=%d\n", sizeof(flags));
	printf ("size of flags2=%d\n", sizeof(flags2));

	flags.is_keyword = 1;
	flags.is_extern  = 0;
	flags.is_static = 2;  //할당범위초과
	printf ("%d, %d, %d\n", flags.is_keyword, flags.is_extern, flags.is_static);

	flags2.b1 = 14;
	flags2.b2 = 15;
	flags2.b3 = 16;  //할당범위초과
	flags2.b4 = 17;  //할당범위초과
	printf ("%d, %d, %d, %d\n", flags2.b1, flags2.b2, flags2.b3, flags2.b4);
	
	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
