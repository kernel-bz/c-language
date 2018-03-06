#include <stdio.h>

typedef struct ptentry ptentry;

struct ptentry {
	char name[16];
	unsigned start;
	unsigned length;
	unsigned flags;
};

ptentry PTABLE[] = {
	{
		.name= "usd", .start=285, .length=4
	},
	{
		.start=289, .length=44, .name="pkg" 
	},
        {
		.flags=3, .start=200, .name="jjj"
        },
	{ "test", 10, 20, 5}
};

main ()
{
	int n;
	for(n=0; PTABLE[n].name[0]; n++) {
		printf("name=%s, %d, flags=%d\n", PTABLE[n].name, PTABLE[n].name[0],  PTABLE[n].flags);
	}
}

