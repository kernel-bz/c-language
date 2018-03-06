//
//	file name:	p0202_type03.c
//	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
//	comments:	제2장 형태, 연산자, 표현
//			데이터 타입
//

#include <stdio.h>

main()
{
	int i;
	//float result;
	double result;
	//long double result;

	//result 데이터 타입 크기
	printf("size of double = %d\n", sizeof(result));
	
	result = 1;
	for (i = 0; i < 8; i++)
		result = result * 2;  //2의 8승(1바이트)
	printf("result8=%f\n", result);

	result = 1;
	for (i = 0; i < 16; i++)
		result = result * 2;  //2의 16승(2바이트)
	printf("result16=%f\n", result);

	result = 1;
	for (i = 0; i < 32; i++)
		result = result * 2;  //2의 32승(4바이트)
	printf("result32=%f\n", result);

	result = 1;
	for (i = 0; i < 64; i++)
		result = result * 2;  //2의 64승(8바이트)
	printf("result64=%f\n", result);

	result = 1;
	for (i = 0; i < 96; i++)
		result = result * 2;  //2의 96승(12바이트)
	printf("result96=%f\n", result);

	result = 1;
	for (i = 0; i < 128; i++)
		result = result * 2;  //2의 128승(16바이트)
	printf("result128=%f\n", result);
	
	result = 1;
	for (i = 0; i < 256; i++)
		result = result * 2;  //2의 256승(32바이트)
	printf("result256=%f\n", result);

	result = 1;
	for (i = 0; i < 512; i++)
		result = result * 2;  //2의 512승(64바이트)
	printf("result512=%f\n", result);

	result = 1;
	for (i = 0; i < 1024; i++)
		result = result * 2;  //2의 1024승(128바이트)
	printf("result1024=%f\n", result);
}

