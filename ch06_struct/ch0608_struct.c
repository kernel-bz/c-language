#include <stdio.h>

#define u8     char
#define u16    short
#define u32    int

int main(void)
{
    struct foo {
        u16    f1;
        u32    f2;
        u8     f3;
    } __attribute__((packed));  //__attribute__(aligned(8)), -malign-double 

    struct foo2 {
        u32    f2;
        u16    f1;
        u8     f3;
    };

    struct foo st1;
    struct foo2 st2;

    printf("st1=%d, st2=%d\n", sizeof(st1), sizeof(st2));

    return 0;
}

