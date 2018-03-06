/*
	file name:	ch0501_ptr02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	포인터 기초
*/

#include <stdio.h>

main ()
{
	int ia[7] = {1, 2, 3, 4, 5, 6, 7};
	char ca[7] = "string";
	double da[7] = {1, 2, 3, 4, 5, 6, 7};
    void *ptr;
	int i;

	//int형 배열 ia의 주소 출력
	for (i = 0; i < 7; i++)
		printf("%X, ", &ia[i]);
	printf("\n");
	//char형 배열 ca의 주소 출력
	for (i = 0; i < 7; i++)
		printf("%X, ", &ca[i]);
	printf("\n");
	//double형 배열 da의 주소 출력
	for (i = 0; i < 7; i++)
		printf("%X, ", &da[i]);
	printf("\n");

	//int형을 가르키는 포인터
	ptr = (int*)ia;
	ptr = (int*)ptr + 1;
	printf("ptr=%X, data=%d\n", (int*)ptr, *(int*)ptr);

	//char형을 가르키는 포인터
	ptr = (char*)ca;
	ptr = (char*)ptr + 1;
	printf("ptr=%X, data=%c\n", (char*)ptr, *(char*)ptr);

	//double형을 가르키는 포인터
	ptr = (double*)da;
	ptr = (double*)ptr + 1;
	printf("ptr=%X, data=%f\n", (double*)ptr, *(double*)ptr);

	printf("\nPress any key to end...");
	getchar();
}
