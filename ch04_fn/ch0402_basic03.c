/*
	file name:	ch0402_basic03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	정수형이 아닌것을 반환하는 함수
*/

#include <stdio.h>
#include <ctype.h>

//문자열을 실수형으로 변환
double atof (char s[])
{
   double val, power;
   int i, sign;

   for (i = 0; isspace(s[i]); i++)  //화이트 스페이스 무시
       ;
   sign = (s[i] == '-') ? -1 : 1;
   if (s[i] == '+' || s[i] == '-')
       i++;
   for (val = 0.0; isdigit(s[i]); i++)
       val = 10.0 * val + (s[i] - '0');
   if (s[i] == '.')
       i++;
   for (power = 1.0; isdigit(s[i]); i++) {
       val = 10.0 * val + (s[i] - '0');
       power *= 10;
   }
   return sign * val / power;
}

//atof 함수를 활용하여 문자열을 정수형으로 변환
int atoi (char s[])
{
   //double atof(char s[]);  //atof 함수 선언

   return (int) atof(s);  //정수형으로 형변환
}

int main ()
{
	printf("%f\n", atof ("2520.3307"));
	printf("%d\n", atoi ("2520.3307"));

	printf("\nPress any key to end...");
	getchar();
}
