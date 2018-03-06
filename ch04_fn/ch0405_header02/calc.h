#ifndef CALC
#define CALC

// calc.h --------------------------------------------------------------------
#define NUMBER  '0'  /* signal that a number was found */

//int sp;

//stack.c
void push(double);
double pop(void);
// gettop.c
int getop(char []);
// getch.c
int getch(void);
void ungetch(int);

#endif

