//
//	file name:	p0202_type03.c
//	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
//	comments:	��2�� ����, ������, ǥ��
//			������ Ÿ��
//

#include <stdio.h>

main()
{
	int i;
	//float result;
	double result;
	//long double result;

	//result ������ Ÿ�� ũ��
	printf("size of double = %d\n", sizeof(result));
	
	result = 1;
	for (i = 0; i < 8; i++)
		result = result * 2;  //2�� 8��(1����Ʈ)
	printf("result8=%f\n", result);

	result = 1;
	for (i = 0; i < 16; i++)
		result = result * 2;  //2�� 16��(2����Ʈ)
	printf("result16=%f\n", result);

	result = 1;
	for (i = 0; i < 32; i++)
		result = result * 2;  //2�� 32��(4����Ʈ)
	printf("result32=%f\n", result);

	result = 1;
	for (i = 0; i < 64; i++)
		result = result * 2;  //2�� 64��(8����Ʈ)
	printf("result64=%f\n", result);

	result = 1;
	for (i = 0; i < 96; i++)
		result = result * 2;  //2�� 96��(12����Ʈ)
	printf("result96=%f\n", result);

	result = 1;
	for (i = 0; i < 128; i++)
		result = result * 2;  //2�� 128��(16����Ʈ)
	printf("result128=%f\n", result);
	
	result = 1;
	for (i = 0; i < 256; i++)
		result = result * 2;  //2�� 256��(32����Ʈ)
	printf("result256=%f\n", result);

	result = 1;
	for (i = 0; i < 512; i++)
		result = result * 2;  //2�� 512��(64����Ʈ)
	printf("result512=%f\n", result);

	result = 1;
	for (i = 0; i < 1024; i++)
		result = result * 2;  //2�� 1024��(128����Ʈ)
	printf("result1024=%f\n", result);
}

