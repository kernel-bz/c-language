/*
	file name:	ch0302_ifelse01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	if-else ����
*/

#include <stdio.h>

main ()
{
	int n = 0;
	int a, b, z, i;

	if (n)
		printf("the n is not zero.\n");
	else 
		printf("the n is zero.\n");

	a = 10;
	b = 20;
	z = 30;
	if (n > 0)
		if (a > b) 
			z = a;
		else 
			z = b;
	printf("z=%d\n", z);

	a = 10;
	b = 20;
	z = 30;
	if (n > 0) {
		if (a > b) 
			z = a;
	} else 
		z = b;
	printf("z=%d\n", z);


	//�߸��� if�� �ڵ�(�� ����)
	if (n > 0) 
       for (i = 0; i < z; i++) 
           if (a > 0)
               printf("a=%d\n", a); 
	else
		printf("error1: n is negative\n"); 


	//�ùٸ� if�� �ڵ�
	if (n > 0) {
       for (i = 0; i < z; i++) 
           if (a > 0)
               printf("a=%d\n", a); 
	} else
		printf("error2: n is negative\n"); 

	printf("\nPress any key to end...");
	getchar();
}
