/*
	file name:	ch0203_const02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자,실수,지수 상수 
*/
#include <stdio.h>

#define HTAB       '\t'    //탭 문자상수
#define BELL       '\a'    //벨 문자상수
#define NEW_LINE   '\n'    //개행 문자상수
#define VTAB_OCTAL '\013'  //8진수 문자상수
#define VTAB_HEX   '\xb'   //16진수 문자상수
#define MAXLINE     1000   //정수 상수
#define EXP         2.71828182845905  //실수 상수
#define EPS         1.0e-5            //지수 상수

main ()
{
    int    limit = MAXLINE + 1;
    char   new_line = NEW_LINE;	//문자형 변수에 할당
    int    exp_int = EXP;	//정수형 변수에 할당
    float  exp_float = EXP;	//실수형 변수에 할당
    double exp_double = EXP;	//double형 변수에 할당
    float  eps_float = EPS;
    double eps_double = EPS;


    printf ("HTAB = %c, %d, %o, %x\n", HTAB, HTAB, HTAB, HTAB);
    printf ("BELL = %c, %d, %o, %x\n", BELL, BELL, BELL, BELL);
    printf ("NEW_LINE = %c, %d, %o, %x, %c\n", NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE, new_line);
    printf ("VTAB = %d, %d\n", VTAB_OCTAL, VTAB_HEX);

    printf ("limit = %d\n", limit);
    printf ("exp = %f, %d, %1.14f, %1.14f\n", EXP, exp_int, exp_float, exp_double);
    printf ("eps = %f, %f, %f, %e\n", EPS, eps_float, eps_double, eps_double);
}

