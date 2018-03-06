/*
	file name:	ch0304_switch02.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	switch 문장
*/

#include <stdio.h>

main ()
{
	//int a;
	while(1)
	{
		int a = 0;

		printf("Choose the number: ");
		if (!scanf("%d",&a)) break;
		//scanf("%d",&a);
		//printf("a=%d\n", a);

		//if ((a < 0) || (a > 9)) return 0;

		switch (a)
		{
			case 1:
				printf("1\n");
				break;
			break;

			case 2:
				printf("2\n");
				break;

			case 'q':	///데이터타입 불일치
				exit(0);
				//return 0;
		}
	} ///while
}
