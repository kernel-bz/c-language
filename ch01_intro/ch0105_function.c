/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	함수 선언과 정의
*/

#include <stdio.h> 

//함수 선언
int power(int m, int n); 

main() 
{ 
    int i; 

    for (i = 0; i < 10; ++i) 
        printf("%d %d %d\n", i, power(2,i), power(-3,i)); 

    return 0;	
} 

//함수 정의: base을 n만큼 곱함
int power(int base, int n) 
{ 
    int i,  p; 

    p = 1; 
    for (i = 1; i <= n; ++i) 
        p = p * base; 
    return p; 
} 
