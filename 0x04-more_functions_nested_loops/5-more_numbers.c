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
			if (i > 9)
			{
				_puchar(1 + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
