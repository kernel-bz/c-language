//
//	file name:	ch0202_type02.c
//	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
//	comments:	��2�� ����, ������, ǥ��
//			������ Ÿ��
//

#include <stdio.h>

main()
{
	int   radius = 10;    //������
	float pi = 3.141592;  //������
	int   circle_area1;   //���ǳ���
	float circle_area2;

	circle_area1 = pi * radius * radius;  //�º��� �캯�� ���������� �ٸ�(������ <> �Ǽ���)
	circle_area2 = pi * radius * radius;  //�º��� �캯�� ���������� ����(�Ǽ��� == �Ǽ���)

	printf("area1=%f\n", (float)circle_area1);
	printf("area2=%f\n", circle_area2);
}

