/*
	file name:	pointer.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	포인터 이해
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
	char *a;
	int  *b;
	float *c;
	double *d;
	void *p;
	int i = 7;
	float f = 23.5;

	void **ptr1;
	char *str1[] = {"tests1", "tests2", "tests3", "tests4", "tests5"};
	char *ptr2;
	int *ptr3;
	char str[5] = "test";
	
	printf ("pointer size: a=%d, b=%d, c=%d, d=%d, p=%d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(p));
	printf ("data    size: a=%d, b=%d, c=%d, d=%d\n", sizeof(*a), sizeof(*b), sizeof(*c), sizeof(*d));

	p = &i;
	printf("i contains: %d\n", *((int*)p) );

	p = &f;
	printf("f contains: %f\n", *((float*)p) );

	//ptr2 = malloc (strlen(str1[0]) + 1);
	ptr2 = malloc (strlen(str) + 1);
	ptr3 = malloc (sizeof(int));

	//strcpy (ptr2, str1[1]);
	strcpy (ptr2, str);
	*ptr3 = i;
	
	ptr1 = malloc (5 * sizeof(void*));
	ptr1[0] = ptr2;
	ptr1[1] = ptr3;

	printf ("%s\n", (char*)ptr1[0]);
	printf ("%d\n", *((int*)ptr1[1]));

	free (ptr1[0]);
	free (ptr1[1]);
	free (ptr1);

	printf ("Press any key to end...");
	getchar();
	return 0;
}
