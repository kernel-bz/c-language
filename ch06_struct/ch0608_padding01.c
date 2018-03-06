/*
	file name:	ch0607_struct_bit01.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	구조체 멤버변수 패딩
*/

#include <stdio.h>

typedef	char		u8;		//1바이트
typedef short int	u16;	//2바이트
typedef int			u32;	//3바이트

struct {
	u16  field1; //2바이트
	u32  field2; //4바이트
	u8  field3;  //1바이트
} foo;

struct {
	u32 field2; //4바이트
	u16 field1; //2바이트
	u8  field3; //1바이트
} foo2;

int main ()
{
	//구조체 크기
	printf ("size of foo : %d\n", sizeof(foo));
	printf ("size of foo2: %d\n", sizeof(foo2));

	//구조체 멤버변수 주소
	printf ("foo : %X, %X, %X\n", &foo.field1, &foo.field2, &foo.field3);
	printf ("foo2: %X, %X, %X\n", &foo2.field1, &foo2.field2, &foo2.field3);

	printf("\nPress any key to end...");
	getchar(); 
	return 0;
}
