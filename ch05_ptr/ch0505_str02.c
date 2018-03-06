/*
	file name:	ch0505_str02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자 포인터와 함수(문자열 비교)
*/

#include <stdio.h>

//문자열 비교(배열사용)
int strcmp1 (char *s, char *t)
{
   int i;
   for (i = 0; s[i] == t[i]; i++)
       if (s[i] == '\0')
           return 0;
   return s[i] - t[i];
}

//문자열 비교(포인터 사용)
int strcmp2 (char *s, char *t)
{
   for ( ; *s == *t; s++, t++)
       if (*s == '\0')
           return 0;
   return *s - *t;
}

int main ()
{
	char str1[] = "This is a string, array";
	char *str2  = "This is a string, pointer";
	int  result;

	//strcmp1 호출
	result = strcmp1 (str1, str2);
	if (result < 0)
		printf ("%d (str1 < str2)\n", result);
	else if (result > 0)
		printf ("%d (str1 > str2)\n", result);
	else
		printf ("%d (str1 == str2)\n", result);

	//strcmp2 호출
	result = strcmp2 (str1, str2);
	printf ("result=%d\n", result);

	printf("\nPress any key to end...");
	getchar();
}
