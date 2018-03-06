//
//  Source: tree_bst.c written by Jung,JaeJoon at the www.kernel.bz
//  Path: /idic/tree/
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-28 Binary Search Tree 자료구조를 코딩하다.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
//#include <malloc.h>
#include "bst.h"


//Create BST Interface
TREE_BST* bst_create (int (*compare) (void* argu1, void* argu2))
{
	TREE_BST* tree;

	tree = (TREE_BST*) malloc (sizeof(TREE_BST));
	if (tree) {
		tree->root = NULL;
		tree->count = 0;
		tree->compare = compare;
	}
	return tree;
}

//Insert BST Interface
bool bst_insert (TREE_BST* tree, void* data_in)
{
	NODE3* node_new;

	node_new = (NODE3*)malloc(sizeof(NODE3));
	if (!node_new) return false;

	node_new->left = NULL;
	node_new->right = NULL;	
	node_new->data = data_in;

	if (tree->count == 0)
		tree->root = node_new;
	else 
		_insert (tree, tree->root, node_new);

	(tree->count)++;
	return true;
}

//Internal Insert
NODE3* _insert (TREE_BST* tree, NODE3* root, NODE3* node_new)
{
	if (!root) return node_new;

	if (tree->compare(node_new->data, root->data) < 0)
	{
		root->left = _insert (tree, root->left, node_new);	//new < root
		return root;
	} else {
		root->right = _insert (tree, root->right, node_new);	//new >= root
		return root;
	}
	return root;
}

//Delete BST Interface
bool bst_delete (TREE_BST* tree, void* data_key)
{
	bool success;
	NODE3* node_new_root;

	node_new_root = _delete (tree, tree->root, data_key, &success);
	if (success) {
		tree->root = node_new_root;
		(tree->count)--;
		if (tree->count == 0) tree->root = NULL;	//tree empty
	}
	return success;
}

//Internal Delete 
NODE3* _delete (TREE_BST* tree, NODE3* root, void* data_key, bool* success)
{
	NODE3* node_del;
	NODE3* node_exch;
	NODE3* node_new_root;
	void* data_hold;

	if (!root) {
		*success = false;
		return NULL;
	}

	if (tree->compare (data_key, root->data) < 0)	//data_key < root
		root->left = _delete (tree, root->left, data_key, success);
	else if (tree->compare (data_key, root->data) > 0)	//data_key > root
		root->right = _delete (tree, root->right, data_key, success);
	else {
		node_del = root;
		if (!root->left) {	//No left subtree
			free (root->data);
			node_new_root = root->right;
			free (node_del);
			*success = true;
			return node_new_root;
		} else {
			if (!root->right) {	//Only left subtree
				node_new_root = root->left;
				free (node_del);
				*success = true;
				return node_new_root;
			} else {	//Has two subtrees
				node_exch = root->left;
				while (node_exch->right) node_exch = node_exch->right;	//Find largest node on left subtree

				//Exchange Data
				data_hold = root->data;
				root->data = node_exch->data;
				node_exch->data = data_hold;
				root->left = _delete (tree, root->left, node_exch->data, success);
			}
		} //Left subtree
	} //data_key = root
	return root;
}

//Retrieve BST Interface
void* bst_retrieve (TREE_BST* tree, void* data)
{
	if (tree->root)
		return _retrieve (tree, data, tree->root);
	else
		return NULL;
}

//Internal Retrieve
void* _retrieve (TREE_BST* tree, void* data, NODE3* node)
{
	if (node) {
		if (tree->compare (data, node->data) < 0)
			return _retrieve (tree, data, node->left);

		else if (tree->compare (data, node->data) > 0)
			return _retrieve (tree, data, node->right);

		else
			return node->data;
	} else
		return NULL;
}

//Traverse BST Interface
void bst_traverse (TREE_BST* tree, void (*process) (void* data))
{
	_traverse (tree->root, process);
	return;
}

//Internal Traverse
void _traverse (NODE3* root, void (*process) (void* data))
{
	if (root) {
		_traverse (root->left, process);
		process (root->data);
		_traverse (root->right, process);
	}
	return;
}

//Empty BST Interface
bool bst_empty (TREE_BST* tree)
{
	return (tree->count == 0);
}

//Full BST Interface
bool bst_full (TREE_BST* tree)
{
	NODE3* node_new;

	node_new = (NODE3*)malloc(sizeof(*(tree->root)));
	if (node_new) {
		free (node_new);
		return false;
	} else
		return true;
}

//BST Count Interface
int bst_count (TREE_BST* tree)
{
	return (tree->count);
}

//Destroy BST Interface
TREE_BST* bst_destroy (TREE_BST* tree)
{
	if (tree) _destroy (tree->root);

	free (tree);
	return NULL;
}

//Internal Destroy
void _destroy (NODE3* root)
{
	if (root) {
		_destroy (root->left);
		free (root->data);
		_destroy (root->right);
		free (root);
	}
	//return;
}
