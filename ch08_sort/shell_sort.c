/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����, shell sort
*/

#include <stdio.h>

void array_print (char *str, int *A, int num)
{
	int	i;
	printf ("%s: ", str);
	for (i = 0; i < num-1; i++)
		printf ("%d, ", A[i]);
	printf ("%d\n", A[i]);
}

//shell_sort:  v[0]...v[n-1]���� ������� �����Ѵ�.
int shell_sort (int v[], int n)
{
   int gap, i, j, temp;
   int ecnt = 0;

   for (gap = n/2; gap > 0; gap /= 2)
       for (i = gap; i < n; i++)
           //for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
		   for (j=i-gap; j>=0; j-=gap) {
			   if (v[j] > v[j+gap]) {
				   temp = v[j];
				   v[j] = v[j+gap];
				   v[j+gap] = temp;
			   }
			   ecnt++; //�ݺ���
           }
   return ecnt;
}

int main (void)
{
	int A[] = {2, 9, 4, 7, 1, 5, 8, 3}; //n = 8
	//int A[] = {1, 2, 3, 4, 5, 7, 8, 9}; //�̹� ���ĵ� �ڷ�(��������)  <-- �ּ�
	//int A[] = {9, 8, 7, 5, 4, 3, 2, 1}; //�̹� ���ĵ� �ڷ�(��������)  <-- �־�
	int n = sizeof(A) / sizeof(A[0]);
	int *pA, ecnt;
	
	pA = A;
	array_print (" Input", pA, n);
	ecnt = shell_sort (A, n);
	array_print ("Output", pA, n);

	printf("Iteration = %d\n", ecnt);

	printf ("Press any key to end...");
	getchar();

	return 0;
}
