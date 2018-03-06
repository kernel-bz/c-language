/*
	file name:	p0201_var03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	제2장 형태, 연산자, 표현
				변수명 다양성
*/

#include <stdio.h>

main ()
{
    int    var;                //소문자로 시작
    int    Var;                //대문자로 시작
    float  this_is_float_var;  //_로 조합
    double ThisIsDoubleVar;    //대소문자로 조합

    var = 10;
    Var = 20;
    this_is_float_var = 3.14;
    ThisIsDoubleVar = 123456789.1234;

    printf ("var = %d, %d, %f, %f\n"
        , var, Var, this_is_float_var, ThisIsDoubleVar);
}

