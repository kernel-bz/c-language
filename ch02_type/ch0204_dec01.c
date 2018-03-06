/*
	file name:	ch0204_dec01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	외부, 내부 선언
*/
#include <stdio.h>

#define MAXLINE 1000

///외부변수
int  lower, upper, step;
char c, line[MAXLINE];

int main ()
{
	///내부 자동변수
	int  lower2;  //시작값
	int  upper2;  //종료값
	int  step2;   //증가값
	char c2;      //문자값
	///char line2[MAXLINE];  //배열

	char  esc = '\\';
	int   i = 0;
	int   limit = MAXLINE+1;
	float eps = 1.0e-5; ///1.0 x 10 ^ -5

	const double e = 2.71828182845905;
	const char msg[] = "warning: ";

	printf ("external variables = %d, %d, %d, %c, %c\n", lower, upper, step, c, line[0]);
	printf ("internal variables = %d, %d, %d, %c\n", lower2, upper2, step2, c2);

	///e = 2.718282;  //오류발생함
	printf ("init variables = %c, %d, %d, %f, %f, %s\n", esc, i, limit, eps, e, msg);
}

