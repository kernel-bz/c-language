/*
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	Loop
*/

#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      //���Ѱ�
    upper = 300;    //���Ѱ�
    step = 20;      //����������
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);  //ȭ���� ������ ���
        printf("%3.0f %6.1f\n", fahr, celsius);  //����� ���
        fahr = fahr + step;  //����
    }
}

