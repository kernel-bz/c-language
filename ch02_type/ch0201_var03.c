/*
	file name:	p0201_var03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	��2�� ����, ������, ǥ��
				������ �پ缺
*/

#include <stdio.h>

main ()
{
    int    var;                //�ҹ��ڷ� ����
    int    Var;                //�빮�ڷ� ����
    float  this_is_float_var;  //_�� ����
    double ThisIsDoubleVar;    //��ҹ��ڷ� ����

    var = 10;
    Var = 20;
    this_is_float_var = 3.14;
    ThisIsDoubleVar = 123456789.1234;

    printf ("var = %d, %d, %f, %f\n"
        , var, Var, this_is_float_var, ThisIsDoubleVar);
}

