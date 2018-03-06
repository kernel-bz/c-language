/*
	file name:	ch0501_ptr02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	������ ����
*/

#include <stdio.h>

main ()
{
	int ia[7] = {1, 2, 3, 4, 5, 6, 7};
	char ca[7] = "string";
	double da[7] = {1, 2, 3, 4, 5, 6, 7};
    void *ptr;
	int i;

	//int�� �迭 ia�� �ּ� ���
	for (i = 0; i < 7; i++)
		printf("%X, ", &ia[i]);
	printf("\n");
	//char�� �迭 ca�� �ּ� ���
	for (i = 0; i < 7; i++)
		printf("%X, ", &ca[i]);
	printf("\n");
	//double�� �迭 da�� �ּ� ���
	for (i = 0; i < 7; i++)
		printf("%X, ", &da[i]);
	printf("\n");

	//int���� ����Ű�� ������
	ptr = (int*)ia;
	ptr = (int*)ptr + 1;
	printf("ptr=%X, data=%d\n", (int*)ptr, *(int*)ptr);

	//char���� ����Ű�� ������
	ptr = (char*)ca;
	ptr = (char*)ptr + 1;
	printf("ptr=%X, data=%c\n", (char*)ptr, *(char*)ptr);

	//double���� ����Ű�� ������
	ptr = (double*)da;
	ptr = (double*)ptr + 1;
	printf("ptr=%X, data=%f\n", (double*)ptr, *(double*)ptr);

	printf("\nPress any key to end...");
	getchar();
}
