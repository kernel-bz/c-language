/*
	file name:	ch0512_complex01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	������ ������ ����, (*pa)[], *pa[]
*/

#include <stdio.h>

//�Ű�����: (*pa)[4]: pa�� �������̸� �迭[4]�� ����Ŵ
void fn_test1 (int (*pa)[4])
{
	int i;
	int n = sizeof(*pa) / sizeof((*pa)[0]);
	
	printf ("\n");
	for (i = 0; i < n; i++)
		printf("%d(%X), ", (*pa)[i], (*pa)+i);
	printf ("\n");
}

//�Ű�����: *pa[2]: pa�� �迭�̸� �����͸� ������
void fn_test2 (int *pa[2])
{
	int i;
	//int n = sizeof(pa) / sizeof(*pa[0]);  //pa�� ũ���??	
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

	//�迭�� �����ͷ� �ѱ�
	fn_test1 (*(a+1)+1);
	fn_test1 (a[1] + 1);

	//�����͸� �迭�� �ѱ�
	pa[0] = (int *) a;
	pa[1] = (int *) *(a + 1);
	fn_test2 (pa);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}

