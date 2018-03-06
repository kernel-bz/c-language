/**
	file name:  bit_flag.c
	author:		  Jung,JaeJoon(rgbi3307@nate.com) on the www.kernel.bz
	comments:
*/
#include <stdio.h>
#include <stdlib.h>

#define READ        0X01    ///0000 0001
#define WRITE       0x02    ///0000 0010
#define UPDATE      0x04    ///0000 0100
#define DELETE      0x08    ///0000 1000

#define WAKEUP		  0x10      ///0001 0000
#define WALK  		  0x20      ///0010 0000
#define RUN   		  0x40      ///0100 0000
#define SLEEP 		  0x80      ///1000 0000

int main()
{
    int flag1, flag2, flag3;

    flag1 = READ | WRITE | UPDATE | DELETE;     ///0000 1111  ///0x0F
    printf("flag1=%02X\n", flag1);
    flag2 = WAKEUP | WALK | RUN | SLEEP;        ///1111 0000    ///0xF0
    printf("flag2=%02X\n", flag2);

    printf("\n");

    if (flag1 & WRITE) printf("WRITE True in the flag1\n");     ///0000 1111 &  0000 0010  ///0000 0010 ///2
    else printf("WRITE False in the flag1\n");

    if (flag2 & WRITE) printf("WRITE True in the flag2\n");      ///1111 0000  &   0000 0010  ///0000 0000 ///0
    else printf("WRITE False in the flag2\n");

    printf("\n");

    flag3 = flag1 | flag2;  ///1111 1111
    printf("flag3 = %02X\n", flag3);    ///0xFF
    printf("flag3 & flag1 = %02X\n", flag3 & flag1);    ///get flag1 ////1111 1111 & 0000 1111 /// 0000 1111 ///0x0F
    printf("flag3 & flag2 = %02X\n", flag3 & flag2);    ///get flag2    ////1111 1111 & 1111 0000 ///1111 0000 ///0xF0

    return 0;
}
