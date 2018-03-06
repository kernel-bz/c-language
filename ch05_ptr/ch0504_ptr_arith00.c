/*
	file name:	ch0504_ptr_arith00.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ּ� ����
*/

#include <stdio.h>

int main ()
{
	char ca[] = { 's', 't', 'r', 'i', 'n', 'g'};
	int ia[] = {1, 2, 3, 4, 5, 6};
	char *cpa, *cpb;
	int  *ipa, *ipb;
	int  n;

	//---------------- ���� ������ ������ ���� --------------------------------

	//������ ������ �����͵� ������ �Ҵ�
	cpa = ca;
	ipa = ia;
	cpb = cpa;
	ipb = ipa;

	//�����Ϳ� ���� ������ ����
	cpa++;
	cpb = cpa - 1;
	ipb = ipa + 2;

	//������ ������ �����͵鰣�� �񱳿� ����
	n = cpa - cpb;
	printf ("cpa - cpb = %d\n", n);
	n = ipb - ipa;
	printf ("ipb - ipa = %d\n", n);

	//�����Ϳ� ���� �Ҵ��ϰų� ��
	cpa = 0;
	//cpa = 100;
	if (cpa == cpb) printf ("cpa is cpb\n");
	else printf ("cpa=%X, cpb=%X\n", cpa, cpb);

	//----------------- ���� �Ұ����� ������ ���� -----------------------------
	/*
	//�����͵鰣�� ����, ����, ������, ����Ʈ, ����ũ����. 
	n = cpa + cpb;
	n = ipa * ipb
	n = ipa / ipb;
	ipa << 2;

	//�����Ϳ� �Ǽ� ����. (ipa + 3.14)
	ipb = ipa + 3.14;
	*/

	printf("\nPress any key to end...");
	getchar();
	return 0;
}
