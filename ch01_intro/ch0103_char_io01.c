/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	���� �����
*/

 
#include <stdio.h> 

//���� �����: getchar()�� �Է¹��� ���ڸ� putchar()�� ���Ͽ� ���
main() 
{ 
   int c; 

   c = getchar(); 
   while (c != EOF) {	//EOF==^Z
       putchar(c); 
       c = getchar(); 
   } 
} 

