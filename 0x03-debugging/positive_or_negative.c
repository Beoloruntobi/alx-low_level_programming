#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - Opening function for the program
 * Description - Code checks for positivity
 * @n: input into function
 */

void positive_or_negative(int n)
{
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}
