#include "main.h"

/**
 * print_square - Print a square
 * @size: number of underscores to make up the line
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
