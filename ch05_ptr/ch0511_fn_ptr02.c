/*
	file name:	ch0511_fn_ptr02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	함수 포인터를 반환하는 함수
*/

#include <stdio.h>

//typedef int Return_Func (char *, char *);

int str_cmp (char *str1, char *str2)
{
	printf ("%s, %s\n", str1, str2);
}

//함수 포인터를 반환하는 함수 정의
int (*pfn (int x, int y) ) (char *, char *)
//Return_Func *pfn (int x, int y)
{
	printf ("%d, %d\n", x, y);

	return str_cmp; //함수 포인터 반환
}

int main ()
{
	//함수 포인터 선언
	//typedef int (*PFI)(char *, char *);
	//PFI pfi = str_cmp;
	int (*pfi)(char *, char *);

	pfi = pfn (10, 20);
	pfi ("str1", "str2");  //함수 호출

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
