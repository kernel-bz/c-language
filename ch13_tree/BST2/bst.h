//
//  Source: tree_bst.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-28 Binary Serach Tree 헤더파일 정의
//		2010-11-24 Introduction to Algorithms 책의 
//					Chapter 12: Binary Search Trees 를 참조하여 BST를 재코딩하다.
//		yyyy-mm-dd ...
//

//boolean 데이터 타입(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;

//단어 구조체 정의 ------------------------------------------------------------
typedef struct
{
	int		key;
	char	*word;
} KEY_WORD;

//이진 트리노드 선언 ----------------------------------------------------------
typedef struct node3
{
	struct node3*	left;
	struct node3*	parent;	//노드 삭제가 간편해짐
	void*			data;	
	struct node3*	right;
} NODE3;

//이진 투리 구조체 선언 -------------------------------------------------------
typedef struct 
{
	int		count;  //노드수
	int		(*compare) (void* argu1, void* argu2);
	NODE3*	root;
} TREE_BST;

//이진 탐색 트리 함수 선언 ----------------------------------------------------
TREE_BST* bst_create (int (*compare) (void* argu1, void* argu2));
TREE_BST* bst_destroy (TREE_BST* tree);

bool bst_insert (TREE_BST* tree, void* data_in);
bool bst_delete (TREE_BST* tree, void* data_key);
void* bst_retrieve (TREE_BST* tree, void* data);
void bst_traverse (TREE_BST* tree, void (*process)(void* data));

bool bst_empty (TREE_BST* tree);
bool bst_full (TREE_BST* tree);
int  bst_count (TREE_BST* tree);

static void _insert (TREE_BST* tree, NODE3* node, NODE3* node_new);
static NODE3* _delete (TREE_BST* tree, NODE3* node);
static void* _retrieve (TREE_BST* tree, void* data, NODE3* node);
static void _traverse (NODE3* node, void (*process) (void* data));
static void _destroy (NODE3* node);

NODE3* bst_search (TREE_BST* tree, void* data, NODE3* node);

NODE3* bst_minimum (NODE3* node);
NODE3* bst_maximum (NODE3* node);
NODE3* bst_successor (NODE3* node);
