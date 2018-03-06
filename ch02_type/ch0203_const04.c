/*
	file name:	ch0203_const04.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	enum »ó¼ö
*/
#include <stdio.h>

/**
#define JAN  1
#define FEB  2
#define MAR  3
#define APR  4
#define MAY  5
#define JUN  6
#define JUL  7
#define AUG  8
#define SEP  9
#define OCT 10
#define NOV 11
#define DEC 12
*/
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN,
                 JUL, AUG, SEP, OCT, NOV, DEC } month;

main ()
{
	enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t',
                   NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };
	enum escapes esc;
	//enum months month;
	enum tests {C0, C1, C2=5, C3, C4} test;
	enum {FALSE, TRUE} boolean;

	esc = NEWLINE;
	printf("esc=%c", esc);
	month = SEP;
	printf("month=%d\n", month);

	boolean = TRUE;
	printf("boolean=%d\n", boolean);
	test = C3;
	printf("test.C3=%d\n", C3);
}

