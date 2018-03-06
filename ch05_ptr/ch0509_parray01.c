/*
	file name:	ch0509_parray01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	포인터 배열과 다차원 배열
*/

#include <stdio.h>

int main ()
{
	int a[10][20];  //다차원 배열(2차원)
	int *b[10];     //포인터 배열
	int i, row;

	char aname[][15] = { "Illegal month", "Jan", "Feb", "Mar" };	//2차원배열
	char *pname[] = { "Illegal month", "Jan", "Feb", "Mar" };		//포인터 배열
	
	printf ("size of a=%d, b=%d\n", sizeof(a), sizeof(b));
	printf ("size of aname=%d, pname=%d\n", sizeof(aname), sizeof(pname));

	row = sizeof(aname) / sizeof(aname[0]);
	//aname 각각의 요소 크기와 주소 출력
	for (i = 0; i < row; i++)
		printf ("%d(%X)%X, ", sizeof(aname[i]), &aname[i], &aname[i][0]);
	printf ("\n");

	row = sizeof(pname) / sizeof(pname[0]);
	//pname 각각의 요소 크기와 주소 출력
	//pname 각각의 요소에 해당하는 데이터는 다른 위치(주소)에 있음
	for (i = 0; i < row; i++)
		printf ("%d(%X)%X, ", sizeof(pname[i]), &pname[i], &pname[i][0]);
	printf ("\n");

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
