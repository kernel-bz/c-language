/*
	Introduction to Algorithms
	Chapter 7: Quicksort
	7.3 A randomized version of quicksort
	-----------------------------------------------------------------------------------------------
	RANDOMIZED-PARTITION(A, p, r) 
	1  i �� RANDOM(p, r) 
	2  exchange A[r] �� A[i] 
	3  return PARTITION(A, p, r) 

	The new quicksort calls RANDOMIZED-PARTITION in place of PARTITION: 
	RANDOMIZED-QUICKSORT(A, p, r) 
	1  if p < r 
	2     then q �� RANDOMIZED-PARTITION(A, p, r) 
	3          RANDOMIZED-QUICKSORT(A, p, q - 1) 
	4          RANDOMIZED-QUICKSORT(A, q + 1, r) 

	-----------------------------------------------------------------------------------------------
	Coding in C: Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
*/

#include <stdio.h>
//#include <time.h>

unsigned int exCnt;  //�ڷ� ��ȯȸ��(ȿ���� ������)

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
5.3 Randomized algorithms

RANDOMIZE-IN-PLACE(A) 
1 n �� length[A] 
2 for i �� to n 
3      do swap A[i] �� A[RANDOM(i, n)] 
*/

//p�� r������ ���� �߻�
unsigned int random_between (unsigned int p, unsigned int r)
{
	//2��15�� = 32768
	//2��16�� = 65536
	//2��30�� = 1073741824 (10��)
	//2��31�� = 2147483648
	//2��32�� = 4294967296
	static unsigned int rand_seed = 10;
	//time_t st;
	//double rand_seed = time (&st);

	rand_seed = p + (rand_seed * 65536) % (r-p);
	return rand_seed;
}

int partition (int v[], int left, int right)
{
	int i, last;

	last = left - 1;
	for (i = left; i < right; i++)
		if (v[i] < v[right]) {
			exchange (v, ++last, i);
			exCnt++;  //��ȯȸ��(ȿ����)
		}

	exchange (v, last+1, right); //right�� �ִ밪�� ��
	return last+1;
}

/*
RANDOMIZED-PARTITION(A, p, r) 
	1  i �� RANDOM(p, r) 
	2  exchange A[r] �� A[i] 
	3  return PARTITION(A, p, r) 
*/
int partition_rand (int A[], int p, int r)
{
	int i = random_between (p, r);  //p�� r������ ����
	exchange (A, r, i);  //���� �����ʰ��� ���� ��ġ�� �ٲ�
	return partition (A, p, r);
}

int quick_sort (int v[], int left, int right)
{
	static int ncnt = 0;

	if (left < right)  {
		//int last = partition (v, left, right);
		int last = partition_rand (v, left, right);  //RANDOMIZED-QUICKSORT

		quick_sort (v, left, last-1);
		quick_sort (v, last+1, right);
		ncnt++;
	}
}

int main (void)
{
	int A[] = {2, 9, 4, 7, 1, 5, 8, 3}; //n = 8
	//int A[] = {1, 2, 3, 4, 5, 7, 8, 9}; //�̹� ���ĵ� �ڷ�(��������)
	//int A[] = {9, 8, 7, 5, 4, 3, 2, 1}; //�̹� ���ĵ� �ڷ�(��������)
	int n = sizeof(A) / sizeof(A[0]);
	int *pA, ncnt;
	
	pA = A;
	array_print (" Input", pA, n);
	exCnt = 0;
	ncnt = quick_sort (A, 0, n-1);
	array_print ("Output", pA, n);

	printf("Iteration = %d, %d\n", ncnt, exCnt);

	printf ("Press any key to end...");
	getchar();
	return 0;
}
