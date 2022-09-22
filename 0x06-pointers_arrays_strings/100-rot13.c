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
		if ((str[j] >= 65 && str[j] <= 77) || (str[j] >= 97 && str[j] <= 109))
		{
			str[j] += 13;
		}
		else if ((str[j] >= 78 && str[j] <= 90) || (str[j] >= 110 && str[j] <= 122))
		{
			str[j] -= 13;
		}
		j++;
	}
	return (str);
}
