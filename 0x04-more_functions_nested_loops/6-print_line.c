#include "main.h"

/**
 * print_line - Print a line
 * @n: number of underscores to make up the line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
