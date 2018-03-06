/*
	file name:	ch0205_arith01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	산술연산순위
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

	///result = pi % y;  //오류발생

	year = 2010;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d 는 윤년입니다.\n", year);  ///2월29일
	else
		printf("%d 는 윤년이 아닙니다.\n", year);  ///2월28일
}

