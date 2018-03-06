//
//  Source: stack.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-18 스택 헤더파일 정의
//		yyyy-mm-dd ...
//

//boolean 데이터 타입(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;

//스택 구조체 선언 ------------------------------------------------------------

//단방향 노드(일반적인 스택, 큐, 리스트)
typedef struct node
{
	void*			data;
	struct node*	link;
} NODE;

//양방향 노드(진보된 스택)
typedef struct node2
{
	struct node2*	prev;	//prev link
	void*			data;	
	struct node2*	next;	//next link
} NODE2;

//스택 구조체
typedef struct
{
	NODE2*	top;
	NODE2*	bottom;
	int		count;
} STACK;

//스택 함수들 선언 ------------------------------------------------------------
STACK* stack_create (void);
STACK* stack_destroy (STACK* stack);

//스택의 top에 push한다.
bool stack_push_top (STACK* stack, void* data_in);
//스택의 bottom에 push한다.
bool stack_push_bottom (STACK* stack, void* data_in);

//스택 높이(height)에 제한을 두어 top에 push한다.
bool stack_push_limit (STACK* stack, void* data_in, int height);
//스택이 height 높이 만큼 되도록 bottom에서 제거한다.
void stack_remove_bottom (STACK* stack, int height);

//스택 상단에서 데이터 가져옴
void* stack_pop_top (STACK* stack);
void* stack_top (STACK* stack);

//스택 하단에서 데이터 가져옴
void* stack_pop_bottom (STACK* stack);
void* stack_bottom (STACK* stack);

bool stack_is_empty (STACK* stack);
bool stack_is_full (STACK* stack);
int stack_count (STACK* stack);
