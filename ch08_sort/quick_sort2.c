/*
	Introduction to Algorithms
	Chapter 7: Quicksort
	-----------------------------------------------------------------------------------------------
	Quicksort is a sorting algorithm whose worst-case running time is Θ(n2) on an input array of n 
	numbers. In spite of this slow worst-case running time, quicksort is often the best practical 
	choice for sorting because it is remarkably efficient on the average: its expected running time 
	is Θ(n lg n), and the constant factors hidden in the Θ(n lg n) notation are quite small. It also 
	has the advantage of sorting in place (see page 16), and it works well even in virtual memory 
	environments

	-----------------------------------------------------------------------------------------------
	Coding in C: Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
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

//swap:  interchange v[i] and v[j]
void exchange (int v[], int i, int j)
{
   int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

/*
PARTITION(A, p, r) 
1  x ← A[r] 
2  i ← p - 1 
3  for j ← p to r - 1 
4       do if A[j] ≤ x 
5             then i ← i + 1 
6                  exchange A[i] ↔ A[j] 
7  exchange A[i + 1] ↔ A[r] 
8  return i + 1 
*/
int partition (int v[], int left, int right)
{
	int i, last;

	last = left - 1;
	for (i = left; i < right; i++)
		if (v[i] < v[right]) exchange (v, ++last, i);

	exchange (v, last+1, right);  //가장 오른쪽값 이동
	return last+1;
}

/*
QUICKSORT(A, p, r) 
1 if p < r 
2    then q ← PARTITION(A, p, r) 
3         QUICKSORT(A, p, q - 1) 
4         QUICKSORT(A, q + 1, r) 
*/
int quick_sort (int v[], int left, int right)
{
	static int ncnt = 0;

	if (left < right)  {
		int last = partition (v, left, right);

		quick_sort (v, left, last-1);
		quick_sort (v, last+1, right);
		ncnt++;
	}
	return ncnt;
}

int main (void)
{
	int A[] = {2, 9, 4, 7, 1, 5, 8, 3}; //n = 8
	//int A[] = {1, 2, 3, 4, 5, 7, 8, 9}; //이미 정렬된 자료(오름차순) <-- 최악
	//int A[] = {9, 8, 7, 5, 4, 3, 2, 1}; //이미 정렬된 자료(내림차순) <-- 재귀호출 최악
	int n = sizeof(A) / sizeof(A[0]);
	int *pA, ncnt;
	
	pA = A;
	array_print (" Input", pA, n);
	ncnt = quick_sort (A, 0, n-1);
	array_print ("Output", pA, n);

	printf("Iteration = %d\n", ncnt);

	printf ("Press any key to end...");
	getchar();
	return 0;
}
