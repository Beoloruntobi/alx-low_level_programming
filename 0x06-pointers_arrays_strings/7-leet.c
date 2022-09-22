#include "main.h"

/**
 * leet - Function that encodes string into 1337
 * @str: String
 * Return: @str
 */

char *leet(char *str)
{
	int i, j;
	int lowerc[] = {97, 101, 108; 111, 116};
	int upperc[] = {65, 69, 76, 79, 84};
	int repn[] = {52, 51, 49, 48, 55};

	j = 0;

	while (str[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == lowerc[i] || str[j] == upperc[i])
			{
				str[j] = repn[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
