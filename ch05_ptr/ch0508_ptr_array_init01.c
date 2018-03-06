/*
	file name:	ch0508_ptr_array_init01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	포인터 배열 초기화
*/

#include <stdio.h>

char *month_name (int n)
{
   static char *name[] = {
       "Illegal month",
       "January", "February", "March",
       "April", "May", "June",
       "July", "August", "September",
       "October", "November", "December"
   };

   return (n < 1 || n > 12) ? name[0] : name[n];
}

int main ()
{
	int i;

	for (i = 0; i < 13; i++)
		printf ("%d is %s\n", i, month_name (i));

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
