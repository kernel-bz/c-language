/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	���� �����
*/

 
#include <stdio.h> 

main() 
{ 
   double nc; 

   for (nc = 0; getchar() != EOF; ++nc) 
       ;	//null statement
   printf("%.0f\n", nc); 
} 

