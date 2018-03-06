/*
	file name:	ch0504_ptr_arith00.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	주소 연산
*/

#include <stdio.h>

int main ()
{
	char ca[] = { 's', 't', 'r', 'i', 'n', 'g'};
	int ia[] = {1, 2, 3, 4, 5, 6};
	char *cpa, *cpb;
	int  *ipa, *ipb;
	int  n;

	//---------------- 수행 가능한 포인터 연산 --------------------------------

	//동일한 형태의 포인터들 사이의 할당
	cpa = ca;
	ipa = ia;
	cpb = cpa;
	ipb = ipa;

	//포인터에 정수 덧셈과 뺄셈
	cpa++;
	cpb = cpa - 1;
	ipb = ipa + 2;

	//동일한 형태의 포인터들간의 비교와 뺄셈
	n = cpa - cpb;
	printf ("cpa - cpb = %d\n", n);
	n = ipb - ipa;
	printf ("ipb - ipa = %d\n", n);

	//포인터에 영을 할당하거나 비교
	cpa = 0;
	//cpa = 100;
	if (cpa == cpb) printf ("cpa is cpb\n");
	else printf ("cpa=%X, cpb=%X\n", cpa, cpb);

	//----------------- 수행 불가능한 포인터 연산 -----------------------------
	/*
	//포인터들간의 덧셈, 곱셈, 나눗셈, 시프트, 마스크연산. 
	n = cpa + cpb;
	n = ipa * ipb
	n = ipa / ipb;
	ipa << 2;

	//포인터에 실수 덧셈. (ipa + 3.14)
	ipb = ipa + 3.14;
	*/

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
