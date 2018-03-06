//
//  Source: main.c written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-30 Red-Black Tree 테스트
//		yyyy-mm-dd ...
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "rbt.h"

int word_compare_full (void* ptr1, void* ptr2)
{
	return strcmp ( ((KEY_WORD*)ptr1)->word, ((KEY_WORD*)ptr2)->word );
}

void print_word (void* data)
{
	printf ("%s:%d\n", ((KEY_WORD*)data)->word, ((KEY_WORD*)data)->key);
	return;
}

int main ()
{
	TREE_RBT*	tree_rbt;
	KEY_WORD*	key_word;
	char		word[40];
	int			icnt;

	//트리 구조체 생성
	tree_rbt = create (word_compare_full);

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

			//입력
			insert (tree_rbt, key_word);
		}
	} while (word[0] > '0');

	//출력
	printf ("\nRBT contains:\n");
	traverse (tree_rbt, print_word);

	//소멸
	destroy (tree_rbt);

	printf ("\nPress any key to end...");
	getchar();
	getchar();
	return 0;
}
