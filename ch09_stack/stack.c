//
//  Source: stack.c written by Jung,JaeJoon at the www.kernel.bz
//  Path: /idic/stack/
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-17 ���� �ڷᱸ���� �ڵ��ϴ�.
//		2010-03-29 ������ �����(top,bottom)���� �۾��� �� �ֵ��� �����ϴ�.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
//#include <malloc.h>
#include "stack.h"

//���� ����(���� ����ü �޸� �Ҵ�)
STACK* stack_create (void)
{
	STACK* stack;

	stack = (STACK*)malloc (sizeof(STACK));
	if (stack) {
		stack->top = NULL;
		stack->bottom = NULL;		
		stack->count = 0;
	}
	return stack;
}

//���� ����(���� ����ü �޸𸮿��� ����)
STACK* stack_destroy (STACK* stack)
{
	NODE2* node_temp;

	if (stack) {
		//while (stack->top != NULL)
		while (stack->count > 0)
		{
			free (stack->top->data);
			node_temp = stack->top;
			stack->top = stack->top->next; //link
			free (node_temp);
			(stack->count)--;
		}
		free (stack);
	}
	return NULL;
}

//������ top�� push�Ѵ�.
bool stack_push_top (STACK* stack, void* data_in)
{
	NODE2* node_new;

	node_new = (NODE2*)malloc (sizeof(NODE2));
	if (!node_new) return false;

	node_new->data = data_in;
	node_new->next = stack->top; //link
	node_new->prev = NULL;

	if (stack->count == 0) stack->bottom = node_new;
	else stack->top->prev = node_new;

	stack->top = node_new;	
	(stack->count)++;
	return true;
}

//������ bottom�� push�Ѵ�.
bool stack_push_bottom (STACK* stack, void* data_in)
{
	NODE2* node_new;

	node_new = (NODE2*)malloc (sizeof(NODE2));
	if (!node_new) return false;

	node_new->data = data_in;
	node_new->prev = stack->bottom; //link
	node_new->next = NULL;

	if (stack->count == 0) stack->top = node_new;
	else stack->bottom->next = node_new;

	stack->bottom = node_new;	
	(stack->count)++;
	return true;
}

//������ top�� push�ϰ� ���� ����(height)�� �����ǵ��� �Ѵ�.
bool stack_push_limit (STACK* stack, void* data_in, int height)
{
	NODE2* node_new;

	node_new = (NODE2*)malloc (sizeof(NODE2));
	if (!node_new) return false;

	node_new->data = data_in;
	node_new->next = stack->top; //link
	node_new->prev = NULL;

	if (stack->count == 0) stack->bottom = node_new;
	else {
		stack->top->prev = node_new;
		//���ó��� ���Ѽ�ġ�� ������, ���� bottom���� �����Ͽ� ���̸� �����Ѵ�.
		if (height > 0) stack_remove_bottom (stack, height);
	}
	stack->top = node_new;	
	(stack->count)++;
	return true;
}

//������ height ���� ��ŭ �ǵ��� bottom���� �����Ѵ�.
void stack_remove_bottom (STACK* stack, int height)
{
	if (stack->count >= height) {
		NODE2* node_temp;
		free (stack->bottom->data);
		node_temp = stack->bottom;
		stack->bottom = stack->bottom->prev;
		free (node_temp);
		(stack->count)--;
		
		stack_remove_bottom (stack, height);
	}
}

//���� ��ܿ��� ������ ������
void* stack_pop_top (STACK* stack)
{
	void* data_out;

	NODE2* node_temp;

	if (stack->count == 0) data_out = NULL;
	else {
		node_temp = stack->top;
		data_out = stack->top->data;
		stack->top = stack->top->next; //link
		free (node_temp);

		(stack->count)--;
	}

	return data_out;
}

//���� �ϴܿ��� ������ ������
void* stack_pop_bottom (STACK* stack)
{
	void* data_out;

	NODE2* node_temp;

	if (stack->count == 0) data_out = NULL;
	else {
		node_temp = stack->bottom;
		data_out = stack->bottom->data;
		stack->bottom = stack->bottom->prev; //link
		free (node_temp);

		(stack->count)--;
	}

	return data_out;
}

void* stack_top (STACK* stack)
{
	if (stack->count == 0) return NULL;
	else return stack->top->data;
}

void* stack_bottom (STACK* stack)
{
	if (stack->count == 0) return NULL;
	else return stack->bottom->data;
}

bool stack_is_empty (STACK* stack)
{
	return (stack->count == 0);
}

bool stack_is_full (STACK* stack)
{
	NODE2* node_temp;

	if ((node_temp = (NODE2*)malloc (sizeof(*(stack->top))) ) )	{
		free(node_temp);
		return false;
	}
	return true;
}

int stack_count (STACK* stack)
{
	return stack->count;
}
