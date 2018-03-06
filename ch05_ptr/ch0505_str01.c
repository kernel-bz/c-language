/*
	file name:	ch0505_str01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자 포인터와 함수
*/

#include <stdio.h>

//문자열 복사(배열사용)
void strcpy1 (char *s, char *t)
{
   int i;
   i = 0;
   while ((s[i] = t[i]) != '\0')
       i++;
}

//문자열 복사(포인터 사용)
void strcpy2 (char *s, char *t)
{
   int i;
   i = 0;
   while ((*s = *t) != '\0') {
       s++;
       t++;
   }
}

//문자열 복사(포인터 사용, 함축)
void strcpy3 (char *s, char *t)
{
   while ((*s++ = *t++) != '\0');
}

//문자열 복사(포인터 사용, 함축)
void strcpy4 (char *s, char *t)
{
   while (*s++ = *t++);
}

main ()
{
	char amessage1[] = "a1:Now is the time"; //배열1
	char amessage2[] = "a2:Now is the time"; //배열2
	char *pmessage   = "p: Now is the time";  //포인터

	amessage1[14] = 'T';
	amessage1[15] = 'I';
	amessage1[16] = 'M';
	amessage1[17] = 'E';
	printf ("%s\n", amessage1);
	printf ("%s\n", amessage2);

	//*(pmessage+11) = 'T';  //오류발생
	printf ("%s\n", pmessage);	

	//strcpy1 (pmessage, amessage2); //오류발생
	pmessage = amessage2;
	printf ("%s\n", pmessage);

	//amessage2 = amessage1; //오류발생
	strcpy1 (amessage2, amessage1);
	printf ("%s\n", amessage2);

	strcpy4 (amessage2, pmessage);
	printf ("%s\n", amessage2);

	printf("\nPress any key to end...");
	getchar();
}
