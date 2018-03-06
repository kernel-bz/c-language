//
//  Source: list_dic.c written by Jung,JaeJoon at the www.kernel.bz
//  Compiler: Standard C
//  Copyright(C): 2010, Jung,JaeJoon(rgbi3307@nate.com)
//
//  rsum:
//		2010-03-25 ����Ʈ �׽�Ʈ�� ������ �ڵ��ϴ�.
//		yyyy-mm-dd ...
//

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "list.h"

#define	STR_MIN	 20
#define STR_MAX 200

typedef struct
{
	int		pno;
	char	eng [STR_MIN];
	char	kor [STR_MAX];
} ENG_KOR_WORD;


LIST*	user_list_build (char *fname_dic);	//�ܾ���� ������ �о �޸𸮿� Linked List ����
void	user_list_print (LIST* list);		//Linked List ������ ��� ���
void	user_list_search (LIST* list);		//Linked List �˻�

int		word_compare (void* ptr1, void* ptr2);		//�ܾ�� ù����
int		word_compare_full (void* ptr1, void* ptr2);	//�ܾ�� full

void	user_menu (LIST* list);	//�۾��޴�
char	user_menu_choice (void);	//�޴�����


int main (void)
{
	LIST* list;

	printf ("English-Korean ���� ����\n"
			"----------------------------------------------\n");

	list = user_list_build ("eng_kor_dic.dat");
	user_menu (list);

	printf ("----------------------------------------------\n"
			"English-Korean ���� ����\n");

	return 0;
}


LIST* user_list_build (char *fname_dic)
{
	FILE*			fpData;
	LIST*			list;
	int				pnoIn;
	int				addResult;
	ENG_KOR_WORD*	pWord;
	char			pEng[STR_MIN];

	list = list_create (word_compare_full);
	if (!list) 
		printf ("\aCannot create list\n"),
			exit (100);
	fpData = fopen (fname_dic, "r");
	if (!fpData)
		printf ("\aError opening input file\n"),
			exit (110);

	while (fscanf (fpData, " %hd", &pnoIn) == 1)
	{
		pWord = (ENG_KOR_WORD*) malloc(sizeof(ENG_KOR_WORD));
		if (!(pWord))
			printf ("\aOut of Memory in build list\n"),
				exit (100);

		pWord->pno = pnoIn;
		pEng[0] = 'z';
		pWord->eng[0] = pEng[0];

		while ((fgetc(fpData)) != '\t');
		while ((fgetc(fpData)) != '"');
		fscanf (fpData, " %40[^\"], %*c", pWord->eng );
		while ((fgetc(fpData)) != '\t');
		while ((fgetc(fpData)) != '"');
		fscanf (fpData, " %40[^\"], %*c", pWord->kor );

		addResult = list_add_node (list, pWord);
		if (addResult != 0)
			if (addResult == -1)
				printf ("Memory overflow adding movie\a\n"),
					exit (120);
			else
				printf ("Duplicate Word %hd not added\a\n", pWord->eng );
		while (fgetc(fpData) != '\n');
	} //while
	return list;
}

void user_list_print (LIST* list)
{
	ENG_KOR_WORD* pWord;

	if (list_count (list) == 0)
		printf("Sorry, nothing in list\n\a");
	else {
		printf("\n���ѻ��� ����Ʈ ��� ����\n");
		list_traverse (list, 0, (void**)&pWord);
		do {
			printf("%hd %-40s %s\n", pWord->pno , pWord->eng , pWord->kor );
		} while (list_traverse (list, 1, (void**)&pWord));
	} //else

	printf("���ѻ��� ����Ʈ ��� ����\n\n");
}

void user_list_search (LIST* list)
{
	char			pEng[STR_MIN];
	bool			found;
	ENG_KOR_WORD	SrchArgu;
	ENG_KOR_WORD*	pWord;

	printf("���ܾ �Է��ϼ���: ");
	scanf("%s", pEng);
	strcpy(SrchArgu.eng, pEng);

	found = list_search_node (list, &SrchArgu, (void**)&pWord);

	if (found)
		printf ("%hd %-40s %s\n", pWord->pno , pWord->eng , pWord->kor );
	else
		printf ("�˼��մϴ�. �˻��� �ܾ �����ϴ�.\n");

	return;
}

int word_compare (void* ptr1, void* ptr2)
{
	int result;

	if ( *(((ENG_KOR_WORD*)ptr1)->eng) < *(((ENG_KOR_WORD*)ptr2)->eng) ) result = -1;
	else if ( *(((ENG_KOR_WORD*)ptr1)->eng) > *(((ENG_KOR_WORD*)ptr2)->eng) ) result = +1;
	else result = 0;

	return result;
}

int word_compare_full (void* ptr1, void* ptr2)
{
	return strcmp ( ((ENG_KOR_WORD*)ptr1)->eng, ((ENG_KOR_WORD*)ptr2)->eng );
}

void user_menu (LIST* list)
{
	char choice;

	do {
		choice = user_menu_choice ();
		switch (choice) {
			case 'P':	user_list_print (list);
						break;
			case 'S':	user_list_search (list);
			case 'Q':	break;
		}
	} while (choice != 'Q');

	return;
}

char user_menu_choice (void)
{
	char choice;
	bool valid;

	printf("============ MENU ============== \n"
		"	S: �ܾ�˻� \n"
		"	P: ���ѻ��� ��� ��� \n"
		"	Q: ���� \n\n"
		"�޴����� ������ Enter: ");

	do {
		scanf(" %c", &choice);
		choice = toupper(choice);
		switch (choice) {
			case 'S':
			case 'P':
			case 'Q': valid = true;
						break;
			default: valid = false;
						printf("\a�޴� ����(S,P,Q) �߸� ����\n"
								"�ٽ� ������ �ּ���: ");
						break;
		}
	} while (!valid);

	return choice;
}
