/*
	file name:	ch0505_str03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자열 상수
*/

#include <stdio.h>

#define MSG1 "message1"
#define MSG2 "message12"
#define MSG3 "message123"

void message_out (int iflag)
{
	char *pmsg = NULL;
 
    if (iflag == 0) pmsg = "message1";
    else if (iflag == 1) pmsg = "message12";
	else if (iflag == 2) pmsg = "message123";

	if (pmsg) printf ("%d: %X,%X,%s\n", iflag, &pmsg, pmsg, pmsg);
}

void message_out2 (int iflag)
{
	char *pmsg1 = "message1";
	char *pmsg2 = "message12";
	char *pmsg3 = "message123";
	char *pmsg = NULL;
 
    if (iflag == 0) pmsg = pmsg1;
    else if (iflag == 1) pmsg = pmsg2;
	else if (iflag == 2) pmsg = pmsg3;

	if (pmsg) printf ("%d: %X,%X,%s\n", iflag, &pmsg, pmsg, pmsg);
}

void message_out3 (int iflag)
{
	char *pmsg = NULL;
 
    if (iflag == 0) pmsg = MSG1;
    else if (iflag == 1) pmsg = MSG2;
	else if (iflag == 2) pmsg = MSG3;

	if (pmsg) printf ("%d: %X,%X,%s\n", iflag, &pmsg, pmsg, pmsg);
}

int main ()
{
	message_out (0);
	message_out (1);
	message_out (2);
	message_out (3);

	message_out2 (0);
	message_out2 (1);
	message_out2 (2);
	message_out2 (3);

	message_out3 (0);
	message_out3 (1);
	message_out3 (2);
	message_out3 (3);

	printf ("%X,%s\n", &MSG1, MSG1);
	printf ("%X,%s\n", &MSG2, MSG2);
	printf ("%X,%s\n", &MSG3, MSG3);

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
