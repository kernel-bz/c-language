/*
	file name:	ch0306_do_while02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ݺ� Loop(do-while) ����
*/

#include <stdio.h>
#include <string.h>

//���ڿ� �յ� �����ٲ�
void reverse (char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
	   c = s[i];
	   s[i] = s[j];
	   s[j] = c;
	}
}

void itoa (int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)  //n�� sign�� �Ҵ��ϰ� �����̸�
	   n = -n;           //n�� ����� �ǰ��Ѵ�.

	i = 0;
	do {      //���� n�� �����ʿ������� ���ڷ� ��ȯ�Ѵ�.
	   s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
	   s[i++] = '-';
	s[i] = '\0';

	reverse (s);	//���� n�� ������ �ڸ����� ���ڿ��� ��ȯ�����Ƿ� �ڸ��� �ٲ۴�.
}

main ()
{
	int n = 25203307;
	char s[10];

	itoa (n, s);
	printf("s=%s\n", s);

	printf("\nPress any key to end...");
	getchar();
}

