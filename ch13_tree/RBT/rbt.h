//
//  Source: rbt.h written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-11-24 Red-Black Tree ������� ����
//		yyyy-mm-dd ...
//

//boolean ������ Ÿ��(gcc: #include <stdbool.h>) ------------------------------
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;

#define RED		0
#define BLACK	1


//�ܾ� ����ü ���� ------------------------------------------------------------
typedef struct
{
	int		key;
	char	*word;
} KEY_WORD;

//���� Ʈ����� ���� ----------------------------------------------------------
typedef struct node3
{
	struct node3*	left;
	struct node3*	parent;	//��� ������ ��������
	void*			data;	
	struct node3*	right;
	int				color;	//RED, BLACK
} NODE3;

//���� ���� ����ü ���� -------------------------------------------------------
typedef struct 
{
	int		count;  //����
	int		(*compare) (void* argu1, void* argu2);
	NODE3*	root;
} TREE_RBT;

//public
TREE_RBT* create (int (*compare) (void* argu1, void* argu2));
TREE_RBT* destroy (TREE_RBT* tree);
bool insert (TREE_RBT* tree, void* data_in);
void traverse (TREE_RBT* tree, void (*process) (void* data));

NODE3* rbt_minimum (NODE3* node);
NODE3* rbt_maximum (NODE3* node);
NODE3* rbt_successor (NODE3* node);

//private, recursion
static void _destroy (NODE3* node);
static void _traverse (NODE3* node, void (*process) (void* data));

//private
void rbt_left_rotate (TREE_RBT* tree, NODE3* x);
void rbt_right_rotate (TREE_RBT* tree, NODE3* x);
void rbt_insert (TREE_RBT* tree, NODE3* z);
void rbt_insert_fixup (TREE_RBT* tree, NODE3* z);
NODE3* rbt_delete (TREE_RBT* tree, NODE3* z);
void rbt_delete_fixup (TREE_RBT* tree, NODE3* x);

