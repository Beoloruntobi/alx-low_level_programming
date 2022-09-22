#include "main.h"

/**
 * _strcmp - Function compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Return 0 if they are similar
 * return negative if the stopping character
 * in @s1 is less than that in @s2 and positive
 * if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
		i++;
	}
	return (diff);
}
