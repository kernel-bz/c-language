/*
	file name:	ch0503_array02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�����Ϳ� �迭
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

int main ()
{
	char arr[] = "hello! world!";
	int length;
	char *ptr;

	length = str_len ("hello! world!");
	printf("length = %d\n", length);
	
	length = str_len (arr);
	printf("length = %d\n", length);

	ptr = arr;
	length = str_len (ptr);
	printf("length = %d, %s\n", length, ptr);

	ptr = arr + 7;
	length = str_len (ptr);
	printf("length = %d, %s\n", length, ptr);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
