/*
	Introduction to Algorithms
	Chapter 6: Heapsort
	-----------------------------------------------------------------------------------------------
	Like merge sort, but unlike insertion sort, heapsort's running time is O(n lg n). 
	Like insertion sort, but unlike merge sort, heapsort sorts in place: 
	only a constant number of array elements are stored outside the input array at any time. 
	Thus, heapsort combines the better attributes of the two sorting algorithms we have already discussed.

	-----------------------------------------------------------------------------------------------
	Coding in C: Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
*/

#include <stdio.h>

int HeapSize;	//힙배열 크기

//C언어는 배열 인덱스가 0부터 시작하므로 인덱스 계산이 달라짐.
int parent (int i)
{
	//return i / 2;
	return (i + 1) / 2;
}

int left (int i)
{
	//return 2 * i;
	return 2 * i + 1;
}

int right (int i)
{
	//return 2 * i + 1;
	return 2 * i + 2;
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
MAX-HEAPIFY(A, i) 
 1 l ← LEFT(i) 
 2 r ← RIGHT(i) 
 3 if l ≤ heap-size[A] and A[l] > A[i] 
 4    then largest ← l 
 5    else largest ← i 
 6 if r ≤ heap-size[A] and A[r] > A[largest] 
 7    then largest ← r 
 8 if largest ≠ i 
 9    then exchange A[i] ↔ A[largest] 
10         MAX-HEAPIFY(A, largest) 
*/
void max_heapify (int A[], int i)
{
	int l = left (i);
	int r = right (i);
	int largest;

	if ((l < HeapSize) && (A[l] > A[i]))
		largest = l;
	else 
		largest = i;

	if ((r < HeapSize) && (A[r] > A[largest]))
		largest = r;

	if (largest != i) {
		exchange (A, i, largest);
		max_heapify (A, largest);
	}
}

/*
BUILD-MAX-HEAP(A) 
1  heap-size[A] ← length[A] 
2  for i ← ⌊length[A]/2⌋ downto 1 
3       do MAX-HEAPIFY(A, i) 
*/
void build_max_heap (int A[])
{
	int i;
	for (i = HeapSize / 2 - 1; i >= 0; i--)
		max_heapify (A, i);
}

/*
HEAPSORT(A) 
1 BUILD-MAX-HEAP(A) 
2 for i ← length[A] downto 2 
3    do exchange A[1] ↔ A[i] 
4       heap-size[A] ← heap-size[A] - 1 
5       MAX-HEAPIFY(A, 1) 
*/
void heap_sort (int A[])
{
	int i;
	int length = HeapSize;

	build_max_heap (A);
	
	for (i = length - 1; i > 0; i--) {
		exchange (A, 0, i);  //최대값을 배열 마지막으로 이동
		HeapSize--;
		max_heapify (A, 0);
	}
}

int main ()
{
	int A[] = {2, 9, 4, 7, 1, 5, 8, 3}; //n = 8
	int length = sizeof(A) / sizeof(A[0]);
	int i;

	HeapSize = length;
	heap_sort (A);
	for (i = 0; i < length; i++)
		printf ("%d, ", A[i]);

	printf ("\nPress any key to end...");
	getchar();
	return 0;
}
