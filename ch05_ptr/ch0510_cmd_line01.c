/*
	file name:	ch0510_cmd_line01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	��ɶ��� �Ű�����
*/

#include <stdio.h>

#define MAIN_TEST ARR

#if MAIN_TEST == ARR

	//��ɶ���(���α׷�����) �Ű�����, �迭ǥ��
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

	//��ɶ���(���α׷�����) �Ű�����, ������ǥ��
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
