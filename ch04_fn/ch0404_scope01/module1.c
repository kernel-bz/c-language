/*
	file name:	ch0404_scope01/module1.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	�ܺ� ����
*/

//�ܺ� ����
extern int gA;
extern int gB;

int fn_a ()
{
	//���� ����
	int a = 10;
	int b = 20;

	///gA++;

	return a + b + gA;
}

int fn_b (int a, int b)
{
	return a + b + gB;
}

