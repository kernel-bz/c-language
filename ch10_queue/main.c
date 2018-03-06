//
//  Source: que_test01.c written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-18 큐 테스트01, 입력받은 정수들을 역순으로 출력한다.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

int main (void)
{
	bool done = false;
	int* data_temp;

	QUEUE* queue;
	queue = que_create ();

	while (!done)
	{
		data_temp = (int*)malloc (sizeof(int));
		printf("Enter a number: <!digit> to stop: ");
		if (((scanf("%d", data_temp)) == 0) || que_is_full (queue)) 
			done = true;
		else 
			que_enqueue (queue, data_temp);
	}

	printf("\n\nThe List of numbers:\n");
	while (!que_is_empty (queue))
	{
		que_dequeue (queue, &data_temp);
		printf("%3d\n", *data_temp);
		free (data_temp);
	}

	que_destroy (queue);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}

