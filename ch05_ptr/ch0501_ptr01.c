/*
	file name:	ch0501_ptr01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	포인터 기초
*/

#include <stdio.h>

main ()
{
    int x = 1, y = 2;
	int z[7] = {1, 2, 3, 4, 5, 6, 7};
    int *ip;			//ip는 int에 대한 포인터이다(ip is a pointer to int)
	int i;

	//변수 x와 y의 주소 출력
	printf ("addr: %X, %X\n", &x, &y);
	//정수형 배열 z의 주소 출력
	for (i = 0; i < 7; i++)
		printf("%X, ", &z[i]);
	printf("\n");

    ip = &x;			//ip는 x를 가르킨다(ip points to x)
    y = *ip;			//y는 1이 된다
    *ip = 0;			//x는 0이 된다	
	printf("ip=%X, x=%d, y=%d\n", ip, x, y);

    ip = &z[0];			//ip는 z[0]를 가르킨다(ip points to z[0])
	*ip = *ip + 10;		//z[0]값에 10을 더한다
	y = *ip + 1;		//*ip값에 1을 더한다
	printf("ip=%X, x=%d, y=%d\n", ip, x, y);
	
	*ip += 1;			//*ip값에 1을 더한다
	x = ++*ip;			//*ip값에 1을 더한다
	printf("ip=%X, x=%d, y=%d\n", ip, x, y);

	x = *ip++;			//ip 주소를 증가시킨다
	y = (*ip)++;		//*ip값을 증가시킨다.
	printf("ip=%X, x=%d, y=%d, *ip=%d\n", ip, x, y, *ip);

	printf("\nPress any key to end...");
	getchar();
}
