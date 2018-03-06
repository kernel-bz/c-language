/*
    author: Jung,JaeJoon (rgbi3307@nate.com, http://www.kernel.bz/)
    comments: ������� �� �Ҵ�
*/
#include <stdio.h>

#define OCTAL 037   //8�� ���
#define HEX   0x1F  //16�� ���
#define HEXUL 0xABCDEF9UL   //��ȣ����long��16�����
#define PI    3.141592     //������ ���

main ()
{
    short int int_short = 65536;
    int       int_var1 = 65536;
    int       int_var2 = 12345678901;
    double    double_var2 = 12345678901UL;
    const int int_const = 1234;  //�����int

    printf ("int = %d, %d, %d, %f\n", int_short, int_var1, int_var2, double_var2);
    printf ("int_const = %d\n", int_const);

    printf ("OCTAL = %o, %d\n", OCTAL, OCTAL);
    printf ("HEX = %x, %d\n", HEX, HEX);
    printf ("HEXUL = %x, %X, %f\n", HEXUL, HEXUL, HEXUL);
    printf ("PI = %f, %e, %d\n", PI, PI, PI);

    double_var2 = PI * HEX * HEX;
    printf ("area of circle = %f\n", double_var2);

    int_const = int_const + 1;  ///����� ������ ������ �� ����
    printf ("int_const = %d\n", int_const);
}

