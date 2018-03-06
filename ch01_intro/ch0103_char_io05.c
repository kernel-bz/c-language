/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자 입출력
*/

 
#include <stdio.h> 

//입력받은 문자열 라인수 계산
main() 
{ 
   int c, nl; 

   nl = 0; 
   while ((c = getchar()) != EOF) 
       if (c == '\n') 
           ++nl; 
   printf("%d\n", nl); 
} 

