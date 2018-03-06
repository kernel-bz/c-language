//
//  Source: tree_bst_int.c written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-28 Binary Search Tree의 정수형 data 테스트
//		yyyy-mm-dd ...
//

#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int compare_int (void* num1, void* num2);
void print_bst (void* num1);

int compare_int (void* num1, void* num2)
{
	int key1, key2;

	key1 = *(int*)num1;
	key2 = *(int*)num2;
	if (key1 < key2) return -1;
	if (key1 == key2) return 0;
	return 1;
}

void print_bst (void* num1)
{
	printf ("%4d\n", *(int*)num1);
	return;
}

/*
int main (void)
{
	TREE_BST*	tree_bst;
	int*		data;
	int			data_in = 1;

	tree_bst = bst_create (compare_int);

	printf ("\nEnter a list of positive integers, negitive integer is for stop:\n");

	do {
		printf ("Enter a number: ");
		scanf ("%d", &data_in);
		if (data_in > -1) {
			data = (int*)malloc(sizeof(int));
			if (!data) {
				printf ("Memory overflow in add\n");
				exit(100);
			}
			*data = data_in;
			bst_insert (tree_bst, data);
		}
	} while (data_in > -1);

	printf ("\nBST contains:\n");
	bst_traverse (tree_bst, print_bst);

	bst_destroy (tree_bst);

	printf ("\nPress any key to end...\n");
	getchar();
	return 0;
}
*/
