/*
	file name:	ch0606_union01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	union
*/

#include <stdio.h>

#define NSYM 32

//union 정의
union u_tag {
	int ival;
	float fval;
	char *sval;
	double dval;
} u;

//struct 정의
struct st_tag {
	int ival;
	float fval;
	char *sval;
	double dval;
} st;

//구조체안의 멤버로 사용된 union
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

	//union과 struct의 크기 비교
	printf ("size of union: %d\n", sizeof(u));
	printf ("size of struct: %d\n", sizeof(st));

	//union에 값 할당
	u.ival = 10;
	u.fval = 3.14;
	u.dval = 2.718;
	printf ("u.val=%d, %f, %f\n", u.ival, u.fval, u.dval);

	//구조체에 값 할당
	st.ival = 10;
	st.fval = 3.14;
	st.dval = 2.718;
	printf ("st.val=%d, %f, %f\n", st.ival, st.fval, st.dval);

	//할당
	for (i = 0; i < NSYM; i++) {
		symtab[i].u.ival = i;
		symtab[i].u.fval = i;
	}
	//출력
	for (i = 0; i < 5; i++)
		printf ("%d, %f\n", symtab[i].u.ival, symtab[i].u.fval);
	
	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
