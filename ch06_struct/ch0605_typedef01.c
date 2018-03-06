/*
	file name:	ch0605_typedef01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	타입 지정자 typedef
*/

#include <stdio.h>
#include <stdlib.h>  //malloc

//int을 Length로 지정
typedef int Length;

//char*를 String으로 지정
typedef char* String;

//struct tnode*를 Treeptr로 지정
typedef struct tnode* Treeptr;

//struct tnode를 Treenode로 지정
typedef struct tnode {
	char *word;
	int count;
} Treenode;

//Treenode 구조체 메모리 할당
Treeptr talloc (void)
{
	printf ("sizeof(Treenode): %d\n", sizeof(Treenode));

	return (Treeptr) malloc(sizeof(Treenode));
}

int main ()
{
	Length len = 4;       //int len
	String str = "test";  //char* str

	//구조체 정의
	Treenode tn;  //struct tnode tn
	//구조체 포인터 정의
	Treeptr ptn;  //struct tnode* ptn

	//정의 할당
	ptn = &tn;
	ptn->count = len;
	ptn->word = str;
	printf ("ptn(%X), %d, %s\n", ptn, ptn->count, ptn->word);

	//메모리 할당
	ptn = talloc ();	
	ptn->count = 1;
	ptn->word = "malloc_string";
	printf ("ptn(%X), %d, %s\n", ptn, ptn->count, ptn->word);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
