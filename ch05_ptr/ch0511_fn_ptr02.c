/*
	file name:	ch0511_fn_ptr02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�Լ� �����͸� ��ȯ�ϴ� �Լ�
*/

#include <stdio.h>

//typedef int Return_Func (char *, char *);

int str_cmp (char *str1, char *str2)
{
	printf ("%s, %s\n", str1, str2);
}

//�Լ� �����͸� ��ȯ�ϴ� �Լ� ����
int (*pfn (int x, int y) ) (char *, char *)
//Return_Func *pfn (int x, int y)
{
	printf ("%d, %d\n", x, y);

	return str_cmp; //�Լ� ������ ��ȯ
}

int main ()
{
	//�Լ� ������ ����
	//typedef int (*PFI)(char *, char *);
	//PFI pfi = str_cmp;
	int (*pfi)(char *, char *);

	pfi = pfn (10, 20);
	pfi ("str1", "str2");  //�Լ� ȣ��

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
