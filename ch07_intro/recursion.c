//
//      Book:           Introduction to Algorithms
//      Chapter:        2
//      Subject:        Recursion study
//      Editted by:     JungJaeJoon, rgbi3307(at)nate.com
//      Website:        http://www.kernel.kr

#include <stdio.h>

int A[3];
int Achk[4];
//int icnt = 0;

void array_print (int *A, int num)
{
	int	i;
	for (i = 0; i < num; i++)
		printf ("%d, ", A[i]);
	printf ("\n");
}

void perm(int level)
{
	int i;

	if (level == 3) {
		array_print (A, 3);
		return;
	}

	for (i = 0; i < 3; i++) {
		//icnt++;
		if (Achk[i]) continue;

		A[level] = i + 1;
		Achk[i] = 1;
		perm (level + 1);
		Achk[i] = 0;
	}
}

int main(void)
{
	perm(0);

	//_getch();
}

