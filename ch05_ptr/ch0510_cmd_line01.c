/*
	file name:	ch0510_cmd_line01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	명령라인 매개변수
*/

#include <stdio.h>

#define MAIN_TEST ARR

#if MAIN_TEST == ARR

	//명령라인(프로그램시작) 매개변수, 배열표현
	int main (int argc, char *argv[])
	{
		int i;

		for (i = 1; i < argc; i++)
		   printf("%s%s", argv[i], (i < argc-1) ? " " : "");
		printf("\n");
	   
		printf("\nPress any key to end...");
		getchar();
		return 0;
	}

#else

	//명령라인(프로그램시작) 매개변수, 포인터표현
	int main (int argc, char *argv[])
	{
		while (--argc > 0)
			//printf("%s%s", *++argv, (argc > 1) ? " " : "");
			printf((argc > 1) ? "%s " : "%s", *++argv);
		printf("\n");

		printf("\nPress any key to end...");
		getchar();
		return 0;
	}

#endif
