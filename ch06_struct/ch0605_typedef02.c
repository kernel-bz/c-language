/*
	file name:	ch0605_typedef02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	타입 지정자 typedef 응용
*/

#include <stdio.h>
#include <stdlib.h>

#define ORDER	5
#define MIN_ENTRIES (((ORDER + 1) / 2) - 1)

//boolean 데이터 타입(gcc: #include <stdbool.h>)
typedef enum {
    true = 1, 
    TRUE = 1, 
    false = 0, 
    FALSE = 0 
} bool;

struct node_btree;

typedef struct 
{
	void*	dataPtr;
	struct  node_btree* rightPtr;
} ENTRY;

typedef struct node_btree
{
	struct  node_btree* firstPtr;
	int		numEntries;
	ENTRY	entries[ORDER - 1];
} NODE_BTREE;

typedef struct
{
	int		count;
	NODE_BTREE*	root;
	int		(*compare) (void* argu1, void* argu2);
} BTREE;

int compare_data_int (void* num1, void* num2)
{
	int key1, key2;

	key1 = *(int*)num1;
	key2 = *(int*)num2;
	if (key1 < key2) return -1;
	if (key1 == key2) return 0;
	return +1;
}

void print_process (void* num1)
{
	printf ("%4d\n", *(int*)num1);
	return;
}

void node_add (NODE_BTREE*	root, int idx);

int main (void)
{
	BTREE*			btree;
	NODE_BTREE*		node;
	//ENTRY*			entry;
	int i;
	int *data;

	btree = (BTREE*)malloc(sizeof(BTREE));
	node = (NODE_BTREE*)malloc(sizeof(NODE_BTREE));

	btree->count = 0;
	btree->root = node;
	btree->compare = compare_data_int;

	printf ("size btree, node = %d, %d\n", sizeof(BTREE), sizeof(NODE_BTREE));

	node->numEntries = 0;
	node->firstPtr = NULL;

	for (i = 0; i < ORDER-1; i++) {		
		data = (int*)malloc(sizeof(int));
		*data = i+1;

		(node->numEntries)++;
		node->entries[i].dataPtr = data;
		node->entries[i].rightPtr = NULL;
	}

	for (i = 0; i < ORDER-1; i++) {	
		printf ("%d,", *(int*)(btree->root->entries[i].dataPtr));
	}

	node_add (btree->root, 1);
	for (i = 0; i < ORDER-1; i++) {	
		printf ("%d,", *(int*)(btree->root->entries[1].rightPtr->entries [i].dataPtr));
	}
	node_add (btree->root, 2);
	for (i = 0; i < ORDER-1; i++) {	
		printf ("%d,", *(int*)(btree->root->entries[2].rightPtr->entries [i].dataPtr));
	}
	node_add (btree->root, 3);
	for (i = 0; i < ORDER-1; i++) {	
		printf ("%d,", *(int*)(btree->root->entries[3].rightPtr->entries [i].dataPtr));
	}
	node_add (btree->root, 4);
	for (i = 0; i < ORDER-1; i++) {	
		printf ("%d,", *(int*)(btree->root->entries[4].rightPtr->entries [i].dataPtr));
	}

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}

void node_add (NODE_BTREE*	root, int idx)
{
	NODE_BTREE*		node;
	int				i;
	int				*data;
	ENTRY			entry;

	node = (NODE_BTREE*)malloc(sizeof(NODE_BTREE));

	node->firstPtr = root;	
	node->numEntries = 0;
	root->entries[idx].rightPtr = node;

	for (i = 0; i < ORDER-1; i++) {		
		data = (int*)malloc(sizeof(int));
		*data = i + (idx*10 + 1);

		entry.dataPtr = data;
		entry.rightPtr = NULL;

		(node->numEntries)++;
		node->entries[i] = entry;
	}

}
