#include <stdio.h>

int main(void)
{
    struct s_tag {
	char  cval;		//1
	int   ival;		//4
	float fval;		//4
	char  *sval;	//4
        double dval;
    } st;

    union u_tag {
	char  cval;
	int   ival;
	float fval;
	char  *sval;
    } un;

    printf("st=%d, un=%d\n", sizeof(st), sizeof(un));
    printf("%d,%d,%d,%d\n", sizeof(st.cval), sizeof(st.ival), sizeof(st.fval), sizeof(st.sval));
    return 0;
}
