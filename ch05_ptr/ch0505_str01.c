/*
	file name:	ch0505_str01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	���� �����Ϳ� �Լ�
*/

#include <stdio.h>

//���ڿ� ����(�迭���)
void strcpy1 (char *s, char *t)
{
   int i;
   i = 0;
   while ((s[i] = t[i]) != '\0')
       i++;
}

//���ڿ� ����(������ ���)
void strcpy2 (char *s, char *t)
{
   int i;
   i = 0;
   while ((*s = *t) != '\0') {
       s++;
       t++;
   }
}

//���ڿ� ����(������ ���, ����)
void strcpy3 (char *s, char *t)
{
   while ((*s++ = *t++) != '\0');
}

//���ڿ� ����(������ ���, ����)
void strcpy4 (char *s, char *t)
{
   while (*s++ = *t++);
}

main ()
{
	char amessage1[] = "a1:Now is the time"; //�迭1
	char amessage2[] = "a2:Now is the time"; //�迭2
	char *pmessage   = "p: Now is the time";  //������

	amessage1[14] = 'T';
	amessage1[15] = 'I';
	amessage1[16] = 'M';
	amessage1[17] = 'E';
	printf ("%s\n", amessage1);
	printf ("%s\n", amessage2);

	//*(pmessage+11) = 'T';  //�����߻�
	printf ("%s\n", pmessage);	

	//strcpy1 (pmessage, amessage2); //�����߻�
	pmessage = amessage2;
	printf ("%s\n", pmessage);

	//amessage2 = amessage1; //�����߻�
	strcpy1 (amessage2, amessage1);
	printf ("%s\n", amessage2);

	strcpy4 (amessage2, pmessage);
	printf ("%s\n", amessage2);

	printf("\nPress any key to end...");
	getchar();
}
