/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자 입출력
*/

 
#include <stdio.h> 

main() 
{ 
   double nc; 

   for (nc = 0; getchar() != EOF; ++nc) 
       ;	//null statement
   printf("%.0f\n", nc); 
} 

