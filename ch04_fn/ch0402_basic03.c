/*
	file name:	ch0402_basic03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�������� �ƴѰ��� ��ȯ�ϴ� �Լ�
*/

#include <stdio.h>
#include <ctype.h>

//���ڿ��� �Ǽ������� ��ȯ
double atof (char s[])
{
   double val, power;
   int i, sign;

   for (i = 0; isspace(s[i]); i++)  //ȭ��Ʈ �����̽� ����
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

//atof �Լ��� Ȱ���Ͽ� ���ڿ��� ���������� ��ȯ
int atoi (char s[])
{
   //double atof(char s[]);  //atof �Լ� ����

   return (int) atof(s);  //���������� ����ȯ
}

int main ()
{
	printf("%f\n", atof ("2520.3307"));
	printf("%d\n", atoi ("2520.3307"));

	printf("\nPress any key to end...");
	getchar();
}
