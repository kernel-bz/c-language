/*
	file name:	ch0501_ptr01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	������ ����
*/

#include <stdio.h>

main ()
{
    int x = 1, y = 2;
	int z[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ip;			//ip�� int�� ���� �������̴�(ip is a pointer to int)
	int i;

	//���� x�� y�� �ּ� ���
	printf ("addr: %X, %X\n", &x, &y);
	//������ �迭 z�� �ּ� ���
	for (i = 0; i < 7; i++)
		printf("%X, ", &z[i]);
	printf("\n");

    ip = &x;			//ip�� x�� ����Ų��(ip points to x)
    y = *ip;			//y�� 1�� �ȴ�
    *ip = 0;			//x�� 0�� �ȴ�	
	printf("ip=%X, x=%d, y=%d\n", ip, x, y);

    ip = &z[0];			//ip�� z[0]�� ����Ų��(ip points to z[0])
	*ip = *ip + 10;		//z[0]���� 10�� ���Ѵ�
	y = *ip + 1;		//*ip���� 1�� ���Ѵ�
	printf("ip=%X, x=%d, y=%d\n", ip, x, y);
	
	*ip += 1;			//*ip���� 1�� ���Ѵ�
	x = ++*ip;			//*ip���� 1�� ���Ѵ�
	printf("ip=%X, x=%d, y=%d\n", ip, x, y);

	x = *ip++;			//ip �ּҸ� ������Ų��
	y = (*ip)++;		//*ip���� ������Ų��.
	printf("ip=%X, x=%d, y=%d, *ip=%d\n", ip, x, y, *ip);

	printf("\nPress any key to end...");
	getchar();
}
