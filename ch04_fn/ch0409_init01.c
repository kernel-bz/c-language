/*
	file name:	ch0409_init01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ʱ�ȭ
*/

#include <stdio.h>

int x = 1;
char squota = '\'';
long mm = 60L;	//minute
long hh = 24L;	//hour
///long day = 1000L * mm * mm * hh;		//�ܺκ��� �ʱⰪ�� ����� �ƴϸ� �����߻�
long day = 1000L * 60L * 60L * 24L;		//milliseconds of day

int main (void)
{
	long day2 = 1000L * mm * mm * hh;	//���κ����� �پ��� ǥ�������� �ʱ�ȭ ����

	printf ("%cmilliseconds of day%c: %ld, %ld\n", squota, squota, day, day2);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
