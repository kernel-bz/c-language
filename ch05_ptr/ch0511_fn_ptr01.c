/*
	file name:	ch0511_fn_ptr01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�Լ��� ����Ű�� ������
*/

#include <stdio.h>

//�Լ� ����
void fn_ptr01 (void)
{
	printf ("fn_ptr01\n");
}

void fn_ptr02 (char *str)
{
	printf ("fn_ptr02: %s\n", str);
}

//�Ű������� �Լ��� ����Ű�� �����͸� ���� ����
//�Լ��� ����Ű�� �����͸� �ٽ� ��ȯ
void* fn_ptr03 (void (*pfn)(char *))
{
	pfn ("fn_ptr03");
	return pfn;
}

int main ()
{
	//�Լ��� ����Ű�� ������ ����
	void (*pfn01) (void);
	void (*pfn02) (char *);

	//�Լ� ������ �Ҵ�
	pfn01 = fn_ptr01;
	pfn02 = fn_ptr02;

	//�Լ� �����͸� ���Ͽ� ȣ��
	pfn01 ();
	pfn02 ("pfn02");

	//pfn02 = (void (*) (char *)) fn_ptr03 (pfn02);
	pfn02 = fn_ptr03 (pfn02);

	//�ٽ� ��ȯ�� �Լ� �����͸� ���Ͽ� ȣ��
	pfn02 ("main: pfn02");

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
