#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct tnode {     /* the tree node: */
	char *word;           /* points to the text */
	int count;            /* number of occurrences */
	struct tnode *left;   /* left child */
	struct tnode *right;  /* right child */
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);

#endif
