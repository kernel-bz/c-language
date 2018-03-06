//
//  Source: tree_bst_word.c written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-30 Binary Search Tree에서 단어구조체(KEY_WORD) 테스트
//		yyyy-mm-dd ...
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "bst.h"

int compare_word (void* ptr1, void* ptr2);
int word_compare_full (void* ptr1, void* ptr2);
void print_key (void* data);
void print_word (void* data);

int compare_word (void* ptr1, void* ptr2)
{
	int result;

	//첫문자만 비교됨
	if ( *(((KEY_WORD*)ptr1)->word) < *(((KEY_WORD*)ptr2)->word) ) result = -1;
	else if ( *(((KEY_WORD*)ptr1)->word) > *(((KEY_WORD*)ptr2)->word) ) result = +1;
	else result = 0;

	return result;
}

int word_compare_full (void* ptr1, void* ptr2)
{
	return strcmp ( ((KEY_WORD*)ptr1)->word, ((KEY_WORD*)ptr2)->word );
}

void print_key (void* data)
{
	printf ("%d\n", ((KEY_WORD*)data)->key);
	return;
}

void print_word (void* data)
{
	printf ("%s:%d\n", ((KEY_WORD*)data)->word, ((KEY_WORD*)data)->key);
	return;
}

int main (void)
{
	TREE_BST*	tree_bst;
	KEY_WORD*	key_word;
	char		word[40];
	int			icnt;

	tree_bst = bst_create (word_compare_full);

	printf ("\nEnter a word, 0 is for stop:\n");

	icnt = 0;
	do {
		printf ("Enter a word: ");
		scanf ("%s", word);
		if (word[0] > '0') {
			key_word = (KEY_WORD*) malloc(sizeof(KEY_WORD));
			if (!key_word) {
				printf ("Memory overflow in add\n");
				exit(100);
			}
			icnt++;
			key_word->word = (char*) malloc(strlen(word));
			//key_word->word = word;
			strcpy(key_word->word, word);
			key_word->key = icnt;

			if (!bst_retrieve (tree_bst, key_word)) bst_insert (tree_bst, key_word);
		}
	} while (word[0] > '0');

	printf ("\nBST contains:\n");
	bst_traverse (tree_bst, print_word);

	//삭제
	key_word = (KEY_WORD*) malloc(sizeof(KEY_WORD));
	key_word->word = (char*) malloc(strlen(word));
	strcpy(key_word->word, "aaa");
	key_word->key = 0;
	bst_delete (tree_bst, key_word);

	strcpy(key_word->word, "bbb");
	key_word->key = 0;
	bst_delete (tree_bst, key_word);

	free(key_word);

	printf ("\nBST contains:\n");
	bst_traverse (tree_bst, print_word);

	bst_destroy (tree_bst);

	printf ("\nPress any key to end...\n");
	getchar();
	getchar();
	return 0;
}
