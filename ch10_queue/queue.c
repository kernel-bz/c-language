//
//  Source: queue.c written by Jung,JaeJoon at the www.kernel.bz
//  Path: /idic/queue/
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-19 ť �ڷᱸ���� �ڵ��ϴ�.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
//#include <malloc.h>
#include "queue.h"


QUEUE* que_create (void)
{
	QUEUE* queue;

	queue = (QUEUE*) malloc(sizeof(QUEUE));
	if (queue) {
		queue->front = NULL;
		queue->rear  = NULL;
		queue->count = 0;
	}
	return queue;
}

QUEUE* que_destroy (QUEUE* queue)
{
	NODE* node_temp;

	if (queue) {
		while (queue->front != NULL) {
			free (queue->front->data);
			node_temp = queue->front;
			queue->front = queue->front->link;
			free (node_temp);
		} //while
		free (queue);
	} //if
	return NULL;
}

//ť�� ��(rear)�� ��带 �Է��Ѵ�.
bool que_enqueue (QUEUE* queue, void* data_in)
{
	NODE* node_new;

	if (!(node_new = (NODE*) malloc (sizeof(NODE)) ) ) 
		return false;

	node_new->data = data_in;
	node_new->link = NULL;

	if (queue->count == 0) queue->front = node_new;
	else queue->rear ->link = node_new;

	(queue->count)++;
	queue->rear = node_new;
	return true;
}

//ť�� ��(front)���� ��带 �������� �����Ѵ�.
bool que_dequeue (QUEUE* queue, void** data_out)
{
	NODE* node_del;

	if (!queue->count) return false;

	*data_out = queue->front->data;
	node_del = queue->front;
	if (queue->count == 1) queue->rear = queue->front = NULL;
	else queue->front = queue->front->link ;

	(queue->count)--;
	free (node_del);

	return true;
}

bool que_front (QUEUE* queue, void** data_out)
{
	if (!queue->count) return false;
	else {
		*data_out = queue->front->data ;
		return true;
	}
}

bool que_rear (QUEUE* queue, void** data_out)
{
	if (!queue->count) return false;
	else {
		*data_out = queue->rear->data ;
		return true;
	}
}

bool que_is_empty (QUEUE* queue)
{
	return (queue->count == 0);
}

bool que_is_full (QUEUE* queue)
{
	NODE* node_temp;

	node_temp = (NODE*) malloc (sizeof(*(queue->rear)));
	if (node_temp) {
		free (node_temp);
		return false;
	}
	return true;
}

int que_count (QUEUE* queue)
{
	return queue->count;
}
