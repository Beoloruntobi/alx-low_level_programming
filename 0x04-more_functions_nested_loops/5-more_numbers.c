#include "main.h"

/**
 * more_numbers - This function prints between 0 and 9
 */

void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
	}
}
