/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자 입출력
*/

 
#include <stdio.h> 

//문자 입출력: getchar()로 입력받은 문자를 putchar()을 통하여 출력
main() 
{ 
   int c; 

   c = getchar(); 
   while (c != EOF) {	//EOF==^Z
       putchar(c); 
       c = getchar(); 
   } 
} 

