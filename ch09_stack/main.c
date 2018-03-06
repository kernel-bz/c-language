//
//  Source: stack_test01.c written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-18 ���� �׽�Ʈ01, �Է¹��� �������� �������� ����Ѵ�.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main (void)
{
	bool done = false;
	int* data_temp;

	STACK* stack;
	stack = stack_create ();

	while (!done)
	{
		data_temp = (int*)malloc (sizeof(int));
		printf("Enter a number: <!digit> to stop: ");
		if (((scanf("%d", data_temp)) == 0) || stack_is_full (stack)) 
			done = true;
		else 
			stack_push_top (stack, data_temp);
	}

	printf("\n\nThe List of numbers reversed:\n");
	while (!stack_is_empty (stack))
	{
		data_temp = (int*)stack_pop_top (stack);
		printf("%3d\n", *data_temp);
		free (data_temp);
	}

    //stack_pop���� ���� �޸� �����ǹǷ� ���ص� ��.
	stack_destroy (stack);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
