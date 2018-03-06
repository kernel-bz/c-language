/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	Á¤·Ä, quick sort
*/

#include <stdio.h>

void array_print (char *str, int cnt, int *A, int num)
{
	int	i;
	printf ("%s(%d): ", str, cnt);
	for (i = 0; i < num; i++)
		printf ("%d, ", A[i]);
	printf ("\n");
}

//swap:  interchange v[i] and v[j]
void exchange (int v[], int i, int j)
{
   int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

//qsort:  sort v[left]...v[right] into increasing order
void quick_sort (int v[], int left, int right)
{
	int i, last;

	if (left >= right)  return;

	//PARTITION
	exchange (v, left, (left + right)/2);

	last = left;
	for (i = left+1; i <= right; i++)
		if (v[i] < v[left]) exchange (v, ++last, i);

	exchange (v, left, last);

	//QUICKSORT
	quick_sort (v, left, last-1);
	quick_sort (v, last+1, right);
}


int main (void)
{
	int A[] = {2, 9, 4, 7, 6, 7, 5, 8, 3, 1, 2, 9, 4, 7, 6, 7}; //n = 16
	int n = sizeof(A) / sizeof(A[0]);
	int *pA;
	
	pA = A;
	array_print (" Input", 0, pA, n);
	quick_sort (A, 0, n-1);
	array_print ("Output", 0, pA, n);

	printf ("Press any key to end...");
	getchar();

	return 0;
}
