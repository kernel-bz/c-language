/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	���� �����
*/

 
#include <stdio.h> 

//�Է¹��� ���ڿ� ���μ� ���
main() 
{ 
   int c, nl; 

   nl = 0; 
   while ((c = getchar()) != EOF) 
       if (c == '\n') 
           ++nl; 
   printf("%d\n", nl); 
} 

