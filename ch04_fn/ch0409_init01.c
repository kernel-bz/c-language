/*
	file name:	ch0409_init01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	초기화
*/

#include <stdio.h>

int x = 1;
char squota = '\'';
long mm = 60L;	//minute
long hh = 24L;	//hour
///long day = 1000L * mm * mm * hh;		//외부변수 초기값은 상수가 아니면 오류발생
long day = 1000L * 60L * 60L * 24L;		//milliseconds of day

int main (void)
{
	long day2 = 1000L * mm * mm * hh;	//내부변수는 다양한 표현식으로 초기화 가능

	printf ("%cmilliseconds of day%c: %ld, %ld\n", squota, squota, day, day2);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
