//
//  Source: list.c written by Jung,JaeJoon at the www.kernel.bz
//  Path: /idic/list/
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-22 리스트 자료구조를 코딩하다.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
//#include <malloc.h>
#include "list.h"


LIST* list_create (int (*compare) (void* argu1, void* argu2) )
{
	LIST* list;

	list = (LIST*) malloc (sizeof (LIST));
	if (list) {
		list->head	= NULL;
		list->pos	= NULL;
		list->tail	= NULL;
		list->count	= 0;
		list->compare	= compare;
	}
	return list;
}

LIST* list_destroy (LIST* pList)
{
	NODE* node_del;

	if (pList) {
		while (pList->count > 0) {
			free (pList->head->data);

			node_del = pList->head;
			pList->head = pList->head->link;
			pList->count--;
			free (node_del);
		}
		free (pList);
	}
	return NULL;
}

int list_add_node (LIST* pList, void* data_in)
{
	bool found;
	bool success;

	NODE* pPre;
	NODE* pLoc;

	found = list_search (pList, &pPre, &pLoc, data_in);
	if (found) return (+1);

	success = list_insert (pList, pPre, data_in);
	if (!success) return (-1); //Overflow
	
	return (0);
}

bool list_remove_node (LIST* pList, void* keyPtr, void** data_out)
{
	bool found;
	NODE* pPre;
	NODE* pLoc;

	found = list_search (pList, &pPre, &pLoc, keyPtr);
	if (found) list_delete (pList, pPre, pLoc, data_out);

	return found;
}

bool list_search_node (LIST* pList, void* pArgu, void** data_out)
{
	bool found;
	NODE* pPre;
	NODE* pLoc;

	found = list_search (pList, &pPre, &pLoc, pArgu);
	if (found) 
		*data_out = pLoc->data;
	else 
		*data_out = NULL;

	return found;
}

static bool list_retrieve_node (LIST* pList, void* pArgu, void** data_out)
{
	bool found;
	NODE* pPre;
	NODE* pLoc;

	found = list_search (pList, &pPre, &pLoc, pArgu);
	if (found) {
		*data_out = pLoc->data;
		return true;
	}
	*data_out = NULL;
	return false;
}

bool list_is_empty (LIST* pList)
{
	return (pList->count == 0);
}

bool list_is_full (LIST* pList)
{
	NODE* temp;

	if ((temp = (NODE*)malloc(sizeof(*(pList->head))))) {
		free (temp);
		return false;
	}
	return true;
}

int list_count (LIST* pList)
{
	return pList->count;
}

bool list_traverse (LIST* pList, int fromWhere, void** data_out)
{
	if (pList->count == 0) return false;

	if (fromWhere == 0) {
		pList->pos = pList->head;
		*data_out = pList->pos->data;
		return true;
	} else {
		if (pList->pos->link == NULL)
			return false;
		else {
			pList->pos = pList->pos->link;
			*data_out = pList->pos->data;
			return true;
		}
	}
}


bool list_insert (LIST* pList, NODE* pPre, void* data_in)
{
	NODE* pNew;

	if (!(pNew = (NODE*) malloc(sizeof(NODE)) )) return false;

	pNew->data = data_in;
	pNew->link = NULL;

	if (pPre == NULL) {
		pNew->link = pList->head;
		pList->head = pNew;
		if (pList->count == 0) pList->tail = pNew;
	} else {
		pNew->link = pPre->link;
		pPre->link = pNew;

		if (pNew->link == NULL) pList->tail = pNew;
	}
	(pList->count)++;
	return true;
}

void list_delete (LIST* pList, NODE* pPre, NODE* pLoc, void** data_out)
{
	*data_out = pLoc->data;
	if (pPre == NULL)
		pList->head = pLoc->link;
	else
		pPre->link = pLoc->link;

	if (pLoc->link == NULL) pList->tail = pPre;
	
	(pList->count)--;
	free (pLoc);

	return;
}

bool list_search (LIST* pList, NODE** pPre, NODE** pLoc, void* pArgu)
{
	#define COMPARE ( ((* pList->compare) (pArgu, (*pLoc)->data)) )
	#define COMPARE_LAST ((* pList->compare) (pArgu, pList->tail->data))

	int result;

	*pPre = NULL;
	*pLoc = pList->head;
	if (pList->count == 0) return false;

	if ( COMPARE_LAST > 0) {
		*pPre = pList->tail;
		*pLoc = NULL;
		return false;
	}

	while ( (result = COMPARE) > 0 )
	{
		*pPre = *pLoc;
		*pLoc = (*pLoc)->link;
	}

	if (result == 0) return true;  //found
	else return false;
}
