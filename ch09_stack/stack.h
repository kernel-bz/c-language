//
//  Source: stack.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-18 ���� ������� ����
//		yyyy-mm-dd ...
//

//boolean ������ Ÿ��(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;

//���� ����ü ���� ------------------------------------------------------------

//�ܹ��� ���(�Ϲ����� ����, ť, ����Ʈ)
typedef struct node
{
	void*			data;
	struct node*	link;
} NODE;

//����� ���(������ ����)
typedef struct node2
{
	struct node2*	prev;	//prev link
	void*			data;	
	struct node2*	next;	//next link
} NODE2;

//���� ����ü
typedef struct
{
	NODE2*	top;
	NODE2*	bottom;
	int		count;
} STACK;

//���� �Լ��� ���� ------------------------------------------------------------
STACK* stack_create (void);
STACK* stack_destroy (STACK* stack);

//������ top�� push�Ѵ�.
bool stack_push_top (STACK* stack, void* data_in);
//������ bottom�� push�Ѵ�.
bool stack_push_bottom (STACK* stack, void* data_in);

//���� ����(height)�� ������ �ξ� top�� push�Ѵ�.
bool stack_push_limit (STACK* stack, void* data_in, int height);
//������ height ���� ��ŭ �ǵ��� bottom���� �����Ѵ�.
void stack_remove_bottom (STACK* stack, int height);

//���� ��ܿ��� ������ ������
void* stack_pop_top (STACK* stack);
void* stack_top (STACK* stack);

//���� �ϴܿ��� ������ ������
void* stack_pop_bottom (STACK* stack);
void* stack_bottom (STACK* stack);

bool stack_is_empty (STACK* stack);
bool stack_is_full (STACK* stack);
int stack_count (STACK* stack);
