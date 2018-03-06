/*
	file name:	ch0511_fn_ptr01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	함수를 가르키는 포인터
*/

#include <stdio.h>

//함수 정의
void fn_ptr01 (void)
{
	printf ("fn_ptr01\n");
}

void fn_ptr02 (char *str)
{
	printf ("fn_ptr02: %s\n", str);
}

//매개변수로 함수를 가르키는 포인터를 전달 받음
//함수를 가르키는 포인터를 다시 반환
void* fn_ptr03 (void (*pfn)(char *))
{
	pfn ("fn_ptr03");
	return pfn;
}

int main ()
{
	//함수를 가르키는 포인터 선언
	void (*pfn01) (void);
	void (*pfn02) (char *);

	//함수 포인터 할당
	pfn01 = fn_ptr01;
	pfn02 = fn_ptr02;

	//함수 포인터를 통하여 호출
	pfn01 ();
	pfn02 ("pfn02");

	//pfn02 = (void (*) (char *)) fn_ptr03 (pfn02);
	pfn02 = fn_ptr03 (pfn02);

	//다시 반환된 함수 포인터를 통하여 호출
	pfn02 ("main: pfn02");

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
