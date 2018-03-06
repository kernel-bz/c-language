/*
	file name:	ch0203_const02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����,�Ǽ�,���� ��� 
*/
#include <stdio.h>

#define HTAB       '\t'    //�� ���ڻ��
#define BELL       '\a'    //�� ���ڻ��
#define NEW_LINE   '\n'    //���� ���ڻ��
#define VTAB_OCTAL '\013'  //8���� ���ڻ��
#define VTAB_HEX   '\xb'   //16���� ���ڻ��
#define MAXLINE     1000   //���� ���
#define EXP         2.71828182845905  //�Ǽ� ���
#define EPS         1.0e-5            //���� ���

main ()
{
    int    limit = MAXLINE + 1;
    char   new_line = NEW_LINE;	//������ ������ �Ҵ�
    int    exp_int = EXP;	//������ ������ �Ҵ�
    float  exp_float = EXP;	//�Ǽ��� ������ �Ҵ�
    double exp_double = EXP;	//double�� ������ �Ҵ�
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

