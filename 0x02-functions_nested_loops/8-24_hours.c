#include "main.h"

/**
 * jack_bauer - Starts here
 * Description - This script prints from 
 * 00:00 to 23:59
 * Return: Return 0 at 23:59
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					if (a == 2 && b == 3 && c == 5 && d == 9)
					{
						return (0);
					}
				}
			}
		}
	}
}
