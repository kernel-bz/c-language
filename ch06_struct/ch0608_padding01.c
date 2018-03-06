/*
	file name:	ch0607_struct_bit01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	����ü ������� �е�
*/

#include <stdio.h>

typedef	char		u8;		//1����Ʈ
typedef short int	u16;	//2����Ʈ
typedef int			u32;	//3����Ʈ

struct {
	u16  field1; //2����Ʈ
	u32  field2; //4����Ʈ
	u8  field3;  //1����Ʈ
} foo;

struct {
	u32 field2; //4����Ʈ
	u16 field1; //2����Ʈ
	u8  field3; //1����Ʈ
} foo2;

int main ()
{
	//����ü ũ��
	printf ("size of foo : %d\n", sizeof(foo));
	printf ("size of foo2: %d\n", sizeof(foo2));

	//����ü ������� �ּ�
	printf ("foo : %X, %X, %X\n", &foo.field1, &foo.field2, &foo.field3);
	printf ("foo2: %X, %X, %X\n", &foo2.field1, &foo2.field2, &foo2.field3);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
