//
//	Binary Search Tree
//

#include "bst.h"

int getword(char *, int);
int get_string (char *word, int lim);

/* word frequency count */
int main (void)
{
   struct tnode *root;
   char word[MAXWORD];

   root = NULL;
   
   //while (getword(word, MAXWORD) != EOF) {
   while (get_string(word, MAXWORD)) {
       if (isalpha(word[0]))
           root = addtree(root, word);
   }

   printf ("Results:\n");
   treeprint(root);

   getch();
   return 0;
}


/* getword:  get next word or character from input */
int getword(char *word, int lim)
{
   int c, getch(void);
   void ungetch(int);
   char *w = word;

   while (isspace(c = getch()))
       ;
   if (c != EOF)
       *w++ = c;
   if (!isalpha(c)) {
       *w = '\0';
       return c;
   }
   for ( ; --lim > 0; w++)
       if (!isalnum(*w = getch())) {
           ungetch(*w);
           break;
       }
   *w = '\0';
   return word[0];
}

int get_string (char *word, int lim)
{
	char *w = word;

	printf ("input word: ");
	for ( ; --lim > 0; w++) {
       if (!isalnum(*w = getch())) {
           //ungetch(*w);
           break;
       }
	   printf ("%c", *w);
	}
    *w = '\0';
	printf ("\n");

	if (isalpha(word[0])) return 1;
	else return 0;
}
