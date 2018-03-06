/*
	file name:	ch0306_do_while02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	반복 Loop(do-while) 응용
*/

#include <stdio.h>
#include <string.h>

//문자열 앞뒤 순서바꿈
void reverse (char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
	   c = s[i];
	   s[i] = s[j];
	   s[j] = c;
	}
}

void itoa (int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)  //n을 sign에 할당하고 음수이면
	   n = -n;           //n이 양수가 되게한다.

	i = 0;
	do {      //숫자 n의 오른쪽에서부터 문자로 변환한다.
	   s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
	   s[i++] = '-';
	s[i] = '\0';

	reverse (s);	//숫자 n의 오른쪽 자리에서 문자열을 변환했으므로 자리를 바꾼다.
}

main ()
{
	int n = 25203307;
	char s[10];

	itoa (n, s);
	printf("s=%s\n", s);

	printf("\nPress any key to end...");
	getchar();
}

