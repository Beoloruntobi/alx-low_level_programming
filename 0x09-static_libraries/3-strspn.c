#include "main.h"

/**
 * _strspn: This function gets the length
 * of a prefix substring
 * @s: segment
 * @accept: source bytes
 * Return: Returns number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		n = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n = 0;
				break;
			}
		}

		if (n == 1)
		{
			break;
		}
	}

	return (i);
}
