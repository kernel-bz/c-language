/*
	file name:	ch0504_ptr_arith01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ּ� ����
*/

#include <stdio.h>

//���ڿ� s�� ���̸� ����
int str_len (char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}

//���ڿ� s�� ���̸� ����
int str_len2 (char *s)
{
	char *p = s;
	
	while (*p != '\0')
		p++;
	return p - s;  //���ڿ��� ���� ������ ���̰�
}

int str_len3 (char *s)
{
	char *p = s;
	
	while (*p++ != '\0');
	return p - s;  //���ڿ��� ���� ������ ���̰�
}

int main ()
{
	printf("length = %d\n", str_len  ("hello! world!"));
	printf("length = %d\n", str_len2 ("hello! world!"));
	printf("length = %d\n", str_len3 ("hello! world!"));

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
