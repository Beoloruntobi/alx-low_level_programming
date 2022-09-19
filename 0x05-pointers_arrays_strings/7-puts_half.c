#include "main.h"
#include <string.h>

/**
 * puts_half - Print the second half of a string
 * @str: Input string
 */

void puts_half(char *str)
{
	int len, i, len2;

	len = strlen(str);
	if (len % 2 == 1)
	{
		len2 = (len - 1) / 2;
		for (i = len2; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		len2 = len / 2;
		for (i = len2; i <= len; i++)
		{
			_putchar(sre[i]);
		}
	}
	_putchar('\n');
}
