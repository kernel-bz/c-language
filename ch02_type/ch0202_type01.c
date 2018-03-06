//
//	file name:	ch0202_type01.c
//	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
//	comments:	제2장 형태, 연산자, 표현
//			데이터 타입의 크기
//

#include <stdio.h>

main ()
{
    char  char1;
    int   int1;
    float float1;
    double double1;

    short int short_int1;
    long  int long_int1;
    long  double long_double1;  ///Linux 12 bytes, Win 8 bytes

    unsigned char unsigned_char1;
    unsigned int  unsigned_int1;

    printf ("size of char = %d\n", sizeof(char1));
    printf ("size of int  = %d\n", sizeof(int1));
    printf ("size of float = %d\n", sizeof(float1));
    printf ("size of double = %d\n", sizeof(double1));

    printf ("size of short int = %d\n", sizeof(short_int1));
    printf ("size of long int = %d\n", sizeof(long_int1));
    printf ("size of long double = %d\n", sizeof(long_double1));

    printf ("size of unsigned char = %d\n", sizeof(unsigned_char1));
    printf ("size of unsigned int = %d\n", sizeof(unsigned_int1));

    char1 = 255;
    printf ("data of char1 = %d\n", char1);
    unsigned_char1 = 255;
    printf ("data of unsigned_char1 = %d\n", unsigned_char1);
}

