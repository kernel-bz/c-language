/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	입력된 문자 종류 카운트
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
           ++ndigit[c-'0'];		//숫자 카운트(아스키 문자로 배열 인덱스 계산)
       else if (c == ' ' || c == '\n' || c == '\t') 
           ++nwhite;			//화이트 스페이스(공백, 개행, 탭) 카운트
       else 
           ++nother;			//기타 문자 카운트

   printf("digits ="); 
   for (i = 0; i < 10; ++i) 
       printf(" %d", ndigit[i]); 
   printf(", white space = %d, other = %d\n", nwhite, nother); 
} 

