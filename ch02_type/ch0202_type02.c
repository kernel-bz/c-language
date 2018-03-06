//
//	file name:	ch0202_type02.c
//	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
//	comments:	제2장 형태, 연산자, 표현
//			데이터 타입
//

#include <stdio.h>

main()
{
	int   radius = 10;    //반지름
	float pi = 3.141592;  //원주율
	int   circle_area1;   //원의넓이
	float circle_area2;

	circle_area1 = pi * radius * radius;  //좌변과 우변의 데이터형이 다름(정수형 <> 실수형)
	circle_area2 = pi * radius * radius;  //좌변과 우변의 데이터형이 같음(실수형 == 실수형)

	printf("area1=%f\n", (float)circle_area1);
	printf("area2=%f\n", circle_area2);
}

