/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	정렬, bubble sort
*/

#include <stdio.h>

//exchange: 배열요소 v[i] 와 v[j]의 값을 바꿈
void exchange (int v[], int i, int j)
{
   int temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

//bubble_sort: 배열요소 v[left]에서 v[right] 사이의 값을 오름차순으로 정렬
//비교 회수 반환
//n(n-1)/2
int bubble_sort (int v[], int left, int right)
{
   int i, j, ncnt=0;

   for (i = left; i < right; i++) {
	   for (j = i+1; j < right; j++) {
			if (v[i] > v[j]) exchange (v, i, j);
			ncnt++;
	   }
   }
   return ncnt;
}

main ()
{
	int i, ncnt;
	int v[] = {2, 9, 4, 7, 1, 5, 8, 3}; //n = 8
	int n = sizeof(v) / sizeof(v[0]);

	ncnt = bubble_sort (v, 0, n);

	//배열 출력
	for (i = 0; i < n-1; i++)
		printf("%d, ", v[i]);
	printf("%d\n", v[i]);

	printf("Iteration = %d\n", ncnt);

	printf ("Press any key to end...");
	getchar();
	return 0;
}
