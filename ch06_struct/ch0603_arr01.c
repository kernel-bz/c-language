/*
	file name:	ch0603_arr01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����ü �迭
*/

#include <stdio.h>

//����ü �迭 ���� �� �ʱ�ȭ
struct key {
   char *word;
   int count;
} keytab[] = {
	"auto"	,	0	,"break",	0	,"case"	,	0	,"char"	,	0	,
	"const"	,	0	,"continue",0	,"default",	0	,"do"	,	0	,
	"double",	0	,"else"	,	0	,"enum"	,	0	,"extern",	0	,
	"float"	,	0	,"for"	,	0	,"goto"	,	0	,"if"	,	0	,
	"int"	,	0	,"long"	,	0	,"register",0	,"return",	0	,
	"short"	,	0	,"signed",	0	,"sizeof",	0	,"static",	0	,
	"struct",	0	,"switch",	0	,"typedef",	0	,"union",	0	,
	"unsigned",	0	,"void",	0	,"volatile",0	,"while",	0
};

//��Ұ��� ����
#define NKEY	sizeof keytab / sizeof(struct key)
//#define NKEY	sizeof keytab / sizeof(keytab[0])

main ()
{
	int i;

	//��Ұ��� �� ũ�� ���
	printf("NKEY=%d, size=%d/%d\n", NKEY, sizeof keytab, sizeof(struct key));

	//����ü �迭 ���
	for (i = 0; i < NKEY; i++)
		printf("%10s, %d\t", keytab[i].word, keytab[i].count);
}

