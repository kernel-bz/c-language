//
//  Source: stack.c written by Jung,JaeJoon at the www.kernel.bz
//  Path: /idic/stack/
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-17 스택 자료구조를 코딩하다.
//		2010-03-29 스택을 양방향(top,bottom)으로 작업할 수 있도록 수정하다.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
//#include <malloc.h>
#include "stack.h"

//스택 생성(스택 구조체 메모리 할당)
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

//스택 삭제(스택 구조체 메모리에서 제거)
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

//스택의 top에 push한다.
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

//스택의 bottom에 push한다.
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

//스택의 top에 push하고 스택 높이(height)가 유지되도록 한다.
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
		//스택높이 제한수치가 있으면, 스택 bottom에서 제거하여 높이를 유지한다.
		if (height > 0) stack_remove_bottom (stack, height);
	}
	stack->top = node_new;	
	(stack->count)++;
	return true;
}

//스택이 height 높이 만큼 되도록 bottom에서 제거한다.
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

//스택 상단에서 데이터 가져옴
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

//스택 하단에서 데이터 가져옴
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
