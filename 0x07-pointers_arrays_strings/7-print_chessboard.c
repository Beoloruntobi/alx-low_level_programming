#include "main.h"

/**
 * print_chessboard - Function that prints chessboard
 * @a: Array of 8 character
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = 1;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}
