/*
	file name:	ch0203_const03.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	문자열 상수
*/
#include <stdio.h>

#define STR1 'a'  //문자상수
#define STR2 "a"  //문자열상수
#define STRING1 "I am a string"
#define STRING2 "I think C-programming language is very good. I want to use it for a computer programming. I am studying it for a long time."
#define STRING3 "I think C-programming language is very good. " \
		"I want to use it for a computer programming. " \
		"I am studying it for a long time."

main ()
{
    printf("str1=%c, %d\n", STR1, STR1);
    printf("str2=%s\n", STR2);
    printf("string1=%s\n", STRING1);
    printf("string2=%s\n", STRING2);
    printf("string3=%s\n", STRING3);
}

