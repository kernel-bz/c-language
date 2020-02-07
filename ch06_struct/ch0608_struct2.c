#include <stdio.h>

struct test1 {
    char a;     ///1byte
    int b;      ///4bytes
    long c;     ///8bytes
                ///padding 3bytes
};

struct test2 {
    int a;      ///4bytes
    int b;      ///4bytes
};

struct test3 {
    struct test1 st1;   ///16bytes
    struct test2 st2;   ///8bytes
};

struct test4 {
    struct test1 *st1;  ///8bytes
    struct test2 *st2;  ///8bytes
};

int main(void)
{
    struct test1 st1;
    struct test2 st2;
    struct test3 st3;
    struct test4 st4;

    printf("st1=%lu, st2=%lu\n", sizeof(st1), sizeof(st2));

    printf("st3=%lu, st4=%lu\n", sizeof(st3), sizeof(st4));

    return 0;
}

