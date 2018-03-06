/*
	file name:	ch0509_parray01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	������ �迭�� ������ �迭
*/

#include <stdio.h>

int main ()
{
	int a[10][20];  //������ �迭(2����)
	int *b[10];     //������ �迭
	int i, row;

	char aname[][15] = { "Illegal month", "Jan", "Feb", "Mar" };	//2�����迭
	char *pname[] = { "Illegal month", "Jan", "Feb", "Mar" };		//������ �迭
	
	printf ("size of a=%d, b=%d\n", sizeof(a), sizeof(b));
	printf ("size of aname=%d, pname=%d\n", sizeof(aname), sizeof(pname));

	row = sizeof(aname) / sizeof(aname[0]);
	//aname ������ ��� ũ��� �ּ� ���
	for (i = 0; i < row; i++)
		printf ("%d(%X)%X, ", sizeof(aname[i]), &aname[i], &aname[i][0]);
	printf ("\n");

	row = sizeof(pname) / sizeof(pname[0]);
	//pname ������ ��� ũ��� �ּ� ���
	//pname ������ ��ҿ� �ش��ϴ� �����ʹ� �ٸ� ��ġ(�ּ�)�� ����
	for (i = 0; i < row; i++)
		printf ("%d(%X)%X, ", sizeof(pname[i]), &pname[i], &pname[i][0]);
	printf ("\n");

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
