/*
	file name:	ch0605_typedef01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	Ÿ�� ������ typedef
*/

#include <stdio.h>
#include <stdlib.h>  //malloc

//int�� Length�� ����
typedef int Length;

//char*�� String���� ����
typedef char* String;

//struct tnode*�� Treeptr�� ����
typedef struct tnode* Treeptr;

//struct tnode�� Treenode�� ����
typedef struct tnode {
	char *word;
	int count;
} Treenode;

//Treenode ����ü �޸� �Ҵ�
Treeptr talloc (void)
{
	printf ("sizeof(Treenode): %d\n", sizeof(Treenode));

	return (Treeptr) malloc(sizeof(Treenode));
}

int main ()
{
	Length len = 4;       //int len
	String str = "test";  //char* str

	//����ü ����
	Treenode tn;  //struct tnode tn
	//����ü ������ ����
	Treeptr ptn;  //struct tnode* ptn

	//���� �Ҵ�
	ptn = &tn;
	ptn->count = len;
	ptn->word = str;
	printf ("ptn(%X), %d, %s\n", ptn, ptn->count, ptn->word);

	//�޸� �Ҵ�
	ptn = talloc ();	
	ptn->count = 1;
	ptn->word = "malloc_string";
	printf ("ptn(%X), %d, %s\n", ptn, ptn->count, ptn->word);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
