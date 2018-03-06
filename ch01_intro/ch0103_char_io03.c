/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자 입출력
*/

 
#include <stdio.h> 

//입력받은 문자수(회수) 계산
main() 
{ 
   long nc; 

   nc = 0; 
   while (getchar() != EOF) 
       ++nc; 
   printf("%ld\n", nc); 
} 

