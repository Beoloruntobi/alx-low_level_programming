#include "main.h"

/**
 * print_diagonal - Print a line
 * @n: number of underscores to make up the line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
