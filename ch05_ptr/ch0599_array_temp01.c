
#include <stdio.h>

main ()
{
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int *pa;
	int i, j, k;

	printf ("\nBefore...\n");
	pa = (int*)arr;
	for (i = 0; i < 9; i++) {
		printf ("%d, ", *pa++);
		if (!((i+1) % 3)) printf ("\n");
	}

	printf ("\nAfter...\n");
	pa = (int*)arr;
	k = 0;
	for (i = 0; i < 9; i++) {
		j = i * 3 - k;
		printf ("%d, ", *(pa+j));
		if (!((i+1) % 3)) {
			printf ("\n");
			k += 8;
		}
	}
}

