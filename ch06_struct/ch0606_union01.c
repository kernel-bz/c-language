/*
	file name:	ch0606_union01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	union
*/

#include <stdio.h>

#define NSYM 32

//union ����
union u_tag {
	int ival;
	float fval;
	char *sval;
	double dval;
} u;

//struct ����
struct st_tag {
	int ival;
	float fval;
	char *sval;
	double dval;
} st;

//����ü���� ����� ���� union
struct {
	char *name;
	int flags;
	int utype;
	union {
		int ival;
		float fval;
		char *sval;
	} u;
} symtab[NSYM];

int main ()
{
	int i;

	//union�� struct�� ũ�� ��
	printf ("size of union: %d\n", sizeof(u));
	printf ("size of struct: %d\n", sizeof(st));

	//union�� �� �Ҵ�
	u.ival = 10;
	u.fval = 3.14;
	u.dval = 2.718;
	printf ("u.val=%d, %f, %f\n", u.ival, u.fval, u.dval);

	//����ü�� �� �Ҵ�
	st.ival = 10;
	st.fval = 3.14;
	st.dval = 2.718;
	printf ("st.val=%d, %f, %f\n", st.ival, st.fval, st.dval);

	//�Ҵ�
	for (i = 0; i < NSYM; i++) {
		symtab[i].u.ival = i;
		symtab[i].u.fval = i;
	}
	//���
	for (i = 0; i < 5; i++)
		printf ("%d, %f\n", symtab[i].u.ival, symtab[i].u.fval);
	
	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
