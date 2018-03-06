/*
	file name:	ch0603_arr02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����ü �迭, Ű���尳��, ���ڿ��Է�, ����Ž��
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
#define NKEYS	sizeof keytab / sizeof(struct key)
//#define NKEYS	sizeof keytab / sizeof(keytab[0])

#define MAXWORD 100

int getword(char *, int);
int binsearch(char *, struct key *, int);

main()
{
   int n;
   char word[MAXWORD];

   while (getword(word, MAXWORD) != '~') {
	   printf("word=%s\n", word);
       if (isalpha(word[0]))
           if ((n = binsearch(word, keytab, NKEYS)) >= 0)
               keytab[n].count++;
   }
   for (n = 0; n < NKEYS; n++)
       if (keytab[n].count > 0)
		   printf("%s:%d\n", keytab[n].word, keytab[n].count);
   return 0;
}

//���� Ž��
int binsearch (char *word, struct key tab[], int n)
{
   int cond;
   int low, high, mid;

   low = 0;
   high = n - 1;
   while (low <= high) {
       mid = (low+high) / 2;
       if ((cond = strcmp(word, tab[mid].word)) < 0)
           high = mid - 1;
       else if (cond > 0)
           low = mid + 1;
       else
           return mid;
   }
   return -1;
}   

//�ܾ��Է�
int getword(char *word, int lim)
{
   int c;
   char *w = word;

   while (isspace(c = getchar()))
       ;
   if (c != '~')
       *w++ = c;
   if (!isalpha(c)) {
       *w = '\0';
       return c;
   }
   for ( ; --lim > 0; w++)
       if (!isalnum(*w = getchar()))
           break;
   *w = '\0';
   return word[0];
}

