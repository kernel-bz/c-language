/*
	file name:	ch0204_dec01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ܺ�, ���� ����
*/
#include <stdio.h>

#define MAXLINE 1000

///�ܺκ���
int  lower, upper, step;
char c, line[MAXLINE];

int main ()
{
	///���� �ڵ�����
	int  lower2;  //���۰�
	int  upper2;  //���ᰪ
	int  step2;   //������
	char c2;      //���ڰ�
	///char line2[MAXLINE];  //�迭

	char  esc = '\\';
	int   i = 0;
	int   limit = MAXLINE+1;
	float eps = 1.0e-5; ///1.0 x 10 ^ -5

	const double e = 2.71828182845905;
	const char msg[] = "warning: ";

	printf ("external variables = %d, %d, %d, %c, %c\n", lower, upper, step, c, line[0]);
	printf ("internal variables = %d, %d, %d, %c\n", lower2, upper2, step2, c2);

	///e = 2.718282;  //�����߻���
	printf ("init variables = %c, %d, %d, %f, %f, %s\n", esc, i, limit, eps, e, msg);
}

