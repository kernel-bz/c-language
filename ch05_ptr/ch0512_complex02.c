/*
	file name:	ch0512_complex02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	������ ������ ����, (*pfn[])()
*/

#include <stdio.h>

char fn_test1 (int ia)
{
	printf ("fn_test1: %d\n", ia);
	return 'A';
}

char fn_test2 (int ia)
{
	printf ("fn_test2: %d\n", ia);
	return 'B';
}

char fn_test3 (int ia)
{
	printf ("fn_test3: %d\n", ia);
	return 'C';
}

int main ()
{
	//pfn�� �迭�̸� �������ε� �Լ�(int�� �μ�)�� ����Ű��
	//�� �Լ��� char���� ��ȯ�Ѵ�.
	char (*pfn[])(int) = {fn_test1, fn_test2, fn_test3};  
	char ch;

	ch = pfn[0](100);
	printf ("ch=%c\n", ch);

	ch = pfn[1](101);
	printf ("ch=%c\n", ch);

	ch = pfn[2](102);
	printf ("ch=%c\n", ch);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
