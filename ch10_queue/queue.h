//
//  Source: queue.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-19 큐 헤더파일 정의
//		yyyy-mm-dd ...
//

//boolean 데이터 타입(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;


//큐 구조체 선언 ------------------------------------------------------------

//단방향 노드(일반적인 스택, 큐, 리스트)
typedef struct node
{
	void*			data;
	struct node*	link;
} NODE;

typedef struct
{
	NODE* front;
	NODE* rear;
	int count;
} QUEUE;


//큐 함수들 선언 ------------------------------------------------------------
QUEUE* que_create (void);
QUEUE* que_destroy (QUEUE*	queue);

bool que_dequeue (QUEUE* queue, void** data_out);
bool que_enqueue (QUEUE* queue, void*  data_in);
bool que_front (QUEUE* queue, void** data_out);
bool que_rear (QUEUE* queue, void** data_out);
int  que_count (QUEUE* queue);

bool que_is_empty (QUEUE* queue);
bool que_is_full  (QUEUE* queue);
