#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String input
 * @c: character on search
 * Return: pointer to first c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}

	return ('\0');
}
