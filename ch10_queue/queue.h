//
//  Source: queue.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-19 ť ������� ����
//		yyyy-mm-dd ...
//

//boolean ������ Ÿ��(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;


//ť ����ü ���� ------------------------------------------------------------

//�ܹ��� ���(�Ϲ����� ����, ť, ����Ʈ)
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


//ť �Լ��� ���� ------------------------------------------------------------
QUEUE* que_create (void);
QUEUE* que_destroy (QUEUE*	queue);

bool que_dequeue (QUEUE* queue, void** data_out);
bool que_enqueue (QUEUE* queue, void*  data_in);
bool que_front (QUEUE* queue, void** data_out);
bool que_rear (QUEUE* queue, void** data_out);
int  que_count (QUEUE* queue);

bool que_is_empty (QUEUE* queue);
bool que_is_full  (QUEUE* queue);
