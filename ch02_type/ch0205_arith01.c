/*
	file name:	ch0205_arith01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����������
*/
#include <stdio.h>

main ()
{
	int x, y, z, result, year;
	double pi = 3.141592;

	x = 5;
	y = 2;
	z = 3;

	result = x - y + z * x / y + -y;
	printf ("result = %d\n", result);

	result = x - (y + z) * x / y + -y;
	printf ("result = %d\n", result);

	result = x % y;
	printf ("result = %d\n", result);

	///result = pi % y;  //�����߻�

	year = 2010;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d �� �����Դϴ�.\n", year);  ///2��29��
	else
		printf("%d �� ������ �ƴմϴ�.\n", year);  ///2��28��
}

