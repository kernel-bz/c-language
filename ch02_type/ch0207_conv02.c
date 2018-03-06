/*
	file name:	ch0207_conv02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	형변환
*/

#include <stdio.h>

///숫자로 변환
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

///소문자로 변환
int lower(int c)
{
   if (c >= 'A' && c <= 'Z')  //ASCII 문자값(정수)로 형변환되어 비교(c >= 65 && c <= 90)
       return c + 'a' - 'A';  //c + 97 - 65
   else
       return c;
}

///숫자인지 판단
int isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return 1;   ///TRUE
	else
		return 0;   ///FALSE
}

int main ()
{
	int n;

	n = atoi ("219");
	printf("n=%d\n", n);    ///219

	n = lower ('A');
	printf("n=%d,%c\n", n, n);  ///97, 'a'

	n = isdigit ('A');      ///0
	printf("n=%d\n", n);

	printf("Press any key to end...");
	getchar();
	return 0;
}

