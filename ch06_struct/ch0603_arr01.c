/*
	file name:	ch0603_arr01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체 배열
*/

#include <stdio.h>

//구조체 배열 선언 및 초기화
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

//요소개수 정의
#define NKEY	sizeof keytab / sizeof(struct key)
//#define NKEY	sizeof keytab / sizeof(keytab[0])

main ()
{
	int i;

	//요소개수 및 크기 출력
	printf("NKEY=%d, size=%d/%d\n", NKEY, sizeof keytab, sizeof(struct key));

	//구조체 배열 출력
	for (i = 0; i < NKEY; i++)
		printf("%10s, %d\t", keytab[i].word, keytab[i].count);
}

