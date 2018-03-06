/*
	file name:	ch0410_recur02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	��� ȣ�� (quicksort, a sorting algorithm developed by C.A.R.Hoare in 1962)
*/

#include <stdio.h>

//swap: �迭��� v[i] �� v[j]�� ���� �ٲ�
void swap (int v[], int i, int j)
{
   int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

//qsort: �迭��� v[left]���� v[right] ������ ���� ������������ ����
void qsort(int v[], int left, int right)
{
   int i, last;
   //void swap(int v[], int i, int j);
   
   if (left >= right)
       return;

   swap (v, left, (left + right)/2);

   last = left;
   for (i = left + 1; i <= right; i++)
       if (v[i] < v[left])
           swap (v, ++last, i);

   swap(v, left, last);

   qsort(v, left, last-1);
   qsort(v, last+1, right);
}

main ()
{
	int i;
	int v[] = {2, 9, 4, 7, 6, 7, 5, 8, 3, 1};
	int n = sizeof(v) / sizeof(v[0]) - 1;

	qsort (v, 0, n);

	for (i = 0; i < n; i++)
		printf("%d, ", v[i]);
	printf("%d", v[i]);

	printf("\nPress any key to end...");
	getchar();
}
