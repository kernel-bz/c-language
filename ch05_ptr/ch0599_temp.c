#include <stdio.h>

char (*(*x1())[])()
{
	static char *str1[] = {"string1", "str2", "str3"};
	return str1[0];
}
 
char *x2()
{
	static char *str2[] = {"string1", "str2", "str3"};
	return str2[0];
}
 
int main ()
{
	printf ("%s\n", x1());
	printf ("%s\n", x2());
	return 0;
}

