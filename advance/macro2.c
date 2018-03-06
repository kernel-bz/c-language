/*
	file name:	macro2.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	조건 컴파일
*/

#include <stdio.h>

#define LINUX   1
#define BSD     2
#define MSDOS   3

#define SYSTEM LINUX

#if SYSTEM == LINUX
   #define HDR "linux.h"
#elif SYSTEM == BSD
   #define HDR "bsd.h"
#elif SYSTEM == MSDOS
   #define HDR "msdos.h"
#else
   #define HDR "default.h"
#endif

///#include HDR

int main ()
{
	printf("%s", HDR);

	//printf("\nPress any key to end...");
	//getchar();
	return 0;
}
