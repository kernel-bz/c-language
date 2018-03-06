#include "bst.h"
#include "mem.h"

/* talloc:  make a tnode */
struct tnode *talloc(void)
{
   return (struct tnode *) malloc(sizeof(struct tnode));
}

/*
char *strdup(char *s)   //make a duplicate of s
{
   char *p;
   p = (char *) malloc(strlen(s)+1);	// +1 for '\0'
   if (p != NULL)
       strcpy(p, s);
   return p;
}
*/

