#include "main.h"

/**
 * print_to_98 - Function to print
 * from given number to 98
 * @n: number input into function
 */

void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			_putchar(num + '0');
			if (num == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}
	else
	{
		for (num = n; num <= 98; num++)
		{
			putchar(num + '0');
			if (num == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
