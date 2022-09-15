#include "main.h"

/**
 * print_diagonal - Print a line
 * @n: number of underscores to make up the line
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
