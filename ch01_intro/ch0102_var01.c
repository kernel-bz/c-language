/*
ch0102_var_01.c
-------------------------------------------------------------------------------
	1.2 Variables and Arithmetic Expressions
	print Fahrenheit-Celsius table.
	Computation in the temperature conversion program.
	It introduces several new ideas, including comments, 
	declarations, variables, arithmetic expressions, loops, and formatted output.
editted by Jung,JaeJoon(rgbi3307@nate.com, http://www.kernel.bz/)
-------------------------------------------------------------------------------
*/
#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;      /* lower limit of temperature scale */
	upper = 300;    /* upper limit */
	step = 20;      /* step size */
	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		//printf("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

