/*
	file name:	ch0305_while_for02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	반복 Loop(while, for) 응용
*/

#include <stdio.h>
#include <ctype.h>	//isspace
#include <string.h> //strlen

//문자열을 숫자로 변환
int atoi (char s[])
{
	int i, n, sign;

	for (i = 0; isspace(s[i]); i++)	//화이트 스페이스는 건너뛴다
	   ;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')	//부호는 건너뛴다
	   i++;
	for (n = 0; isdigit(s[i]); i++)
	   n = 10 * n + (s[i] - '0');   //정수형 문자를 숫자로 변환
	return sign * n;
}

//shellsort:  v[0]...v[n-1]들을 순서대로 정렬한다.
void shellsort (int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2)
	   for (i = gap; i < n; i++)
		   for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
			   temp = v[j];
			   v[j] = v[j+gap];
			   v[j+gap] = temp;
		   }
}

//문자열 앞뒤 순서바꿈
void reverse (char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
	   c = s[i];
	   s[i] = s[j];
	   s[j] = c;
	}
}

main ()
{
	int n, i;
	char s[] = "3307";
	int v[] = {2, 9, 4, 7, 6, 7, 5, 8, 3, 1};
	
	//문자열을 숫자로 변환
	n = atoi (s);
	printf("n = %d\n", n);

	//문자열 앞뒤 순서바꿈
	reverse (s);
	printf("s = %s\n", s);

	//배열의 크기(요소개수)
	printf("shell sorting\n");
	n = sizeof(v) / sizeof(v[0]);
	shellsort (v, n);
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");	

	printf("\nPress any key to end...");
	getchar();
}
