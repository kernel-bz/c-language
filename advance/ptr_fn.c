/**
	file name:  ptr_fn.c
	author:		  Jung,JaeJoon(rgbi3307@nate.com) on the www.kernel.bz
	comments:    function pointer arrary: (*pfn[])()
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
	//pfn은 배열이며 포인터인데 함수(int형 인수)를 가르키며
	//이 함수는 char형을 반환한다.
	char (*pfn[])(int) = {fn_test1, fn_test2, fn_test3};
	char ch;

    printf("pfn: %p, %p, %p, %p\n", &main, &fn_test1, &fn_test2, &fn_test3);
    printf("pfn: %p, %p, %p, %p\n", &main, pfn[0] , pfn[1],  pfn[2]);

	ch = pfn[0](100);
	printf ("ch=%c\n", ch);

	ch = pfn[1](101);
	printf ("ch=%c\n", ch);

	ch = pfn[2](102);
	printf ("ch=%c\n", ch);

	//printf("\nPress any key to end...");
	//getchar();
	return 0;
}
