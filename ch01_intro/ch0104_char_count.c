/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�Էµ� ���� ���� ī��Ʈ
*/

#include <stdio.h> 
 
main() 
{ 
   int c, i, nwhite, nother; 
   int ndigit[10]; 

   nwhite = nother = 0; 
   for (i = 0; i < 10; ++i) 
       ndigit[i] = 0; 

   while ((c = getchar()) != '~') 
       if (c >= '0' && c <= '9') 
           ++ndigit[c-'0'];		//���� ī��Ʈ(�ƽ�Ű ���ڷ� �迭 �ε��� ���)
       else if (c == ' ' || c == '\n' || c == '\t') 
           ++nwhite;			//ȭ��Ʈ �����̽�(����, ����, ��) ī��Ʈ
       else 
           ++nother;			//��Ÿ ���� ī��Ʈ

   printf("digits ="); 
   for (i = 0; i < 10; ++i) 
       printf(" %d", ndigit[i]); 
   printf(", white space = %d, other = %d\n", nwhite, nother); 
} 

