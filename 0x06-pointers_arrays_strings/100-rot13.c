#include "main.h"

/**
 * rot13 - Function that encodes string into rot13
 * @str: String
 * Return: @str
 */

char *rot13(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 65 && str[j] <= 77)
		{
			str[j] += 13;
		}
		else
		{
			str[j] -= 13;
		}
		j++;
	}
	return (str);
}
