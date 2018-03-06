/*
	file name:	ch0405_header01/module2.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	외부 변수
*/

//외부 변수
extern int gA;
extern int gB;

int fn_c ()
{
	return gA + gB;
}
