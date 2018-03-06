//
//  Source: list.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-22 리스트 헤더파일 정의
//		yyyy-mm-dd ...
//

//boolean 데이터 타입(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;


//리스트 구조체 선언 ------------------------------------------------------------

//단방향 노드(일반적인 스택, 큐, 리스트)
typedef struct node
{
	void*			data;
	struct node*	link;
} NODE;

typedef struct
{
	int count;
	NODE* pos;
	NODE* head;
	NODE* tail;
	int (*compare) (void* argu1, void* argu2);
} LIST;

//리스트 함수들 선언 ------------------------------------------------------------
LIST* list_create (int (*compare) (void* argu1, void* argu2) );
LIST* list_destroy (LIST* list);
int list_add_node (LIST* pList, void* data_in);
bool list_remove_node (LIST* pList, void* keyPtr, void** data_out);
bool list_search_node (LIST* pList, void* pArgu, void** data_out);
bool list_retrieve_node (LIST* pList, void* pArgu, void** data_out);
//리스트 탐색
bool list_traverse (LIST* pList, int fromWhere, void** data_out);

int list_count (LIST* pList);
bool list_is_empty (LIST* pList);
bool list_is_full (LIST* pList);

//private 
bool list_insert (LIST* pList, NODE* pPre, void* data_in);
void list_delete (LIST* pList, NODE* pPre, NODE* pLoc, void** data_out);
bool list_search (LIST* pList, NODE** pPre, NODE** pLoc, void* pArgu);

