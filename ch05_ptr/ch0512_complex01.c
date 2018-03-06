/*
	file name:	ch0512_complex01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	복잡한 포인터 이해, (*pa)[], *pa[]
*/

#include <stdio.h>

//매개변수: (*pa)[4]: pa는 포인터이며 배열[4]을 가르킴
void fn_test1 (int (*pa)[4])
{
	int i;
	int n = sizeof(*pa) / sizeof((*pa)[0]);
	
	printf ("\n");
	for (i = 0; i < n; i++)
		printf("%d(%X), ", (*pa)[i], (*pa)+i);
	printf ("\n");
}

//매개변수: *pa[2]: pa는 배열이며 포인터를 저장함
void fn_test2 (int *pa[2])
{
	int i;
	//int n = sizeof(pa) / sizeof(*pa[0]);  //pa의 크기는??	
	for (i = 0; i < 2; i++)
		printf("%d(%X), ", *pa[i], pa[i]);
	printf ("\n");
}

int main ()
{
	int i, j, k;
	int a[2][3][4] = {
		{
			{111, 112, 113, 114},
			{121, 122, 123, 124},
			{131, 132, 133, 134},
		},
		{
			{211, 212, 213, 214},
			{221, 222, 223, 224},
			{231, 232, 233, 234},
		}
	};
	int *pa[2];

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++)
				printf ("%d(%X), ", a[i][j][k], &a[i][j][k]);
			printf ("\n");
		}

	printf ("\n%d, %X, %X, %X\n", ***a, **a, *a, a);

	//배열을 포인터로 넘김
	fn_test1 (*(a+1)+1);
	fn_test1 (a[1] + 1);

	//포인터를 배열로 넘김
	pa[0] = (int *) a;
	pa[1] = (int *) *(a + 1);
	fn_test2 (pa);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}

