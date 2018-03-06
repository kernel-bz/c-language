/**
	file name:	inline.c
	author:		Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
	comments:	inline
*/

#include <stdio.h>
#include <time.h>

///#define CONFIG_INLINE

#ifdef CONFIG_INLINE
inline __always_inline void fn_test1 (void)
#else
void fn_test1 (void)
#endif
{
	int a=0;
	a++;
}

#ifdef CONFIG_INLINE
inline __always_inline void fn_test2 (void)
#else
void fn_test2 (void)
#endif
{
	int a=0;
	a++;
}

#ifdef CONFIG_INLINE
inline __always_inline void fn_test3 (void)
#else
void fn_test3 (void)
#endif
{
	int a=0;
	a++;
}

#ifdef CONFIG_INLINE
inline __always_inline void fn_test4 (void)
#else
void fn_test4 (void)
#endif
{
	int a=0;
	a++;
}

int main ()
{
    int i;
    time_t t1, t2;

    t1 = time(NULL);
    for (i=0; i < 100000; i++) {
        printf("%d:\n", i);
        fn_test1 ();
        fn_test2 ();
        fn_test3 ();
        fn_test4 ();
        printf("\n");
    }
    t2 = time(NULL);

    printf("Runtime: %d\n", t2 - t1);

    //printf ("%p, %p, %p, %p\n", &fn_test1, &fn_test2, &fn_test3, &fn_test4);

	//printf("\nPress any key to end...");
	//getchar();

	return 0;
}
