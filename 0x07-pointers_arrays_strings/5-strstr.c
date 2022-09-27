#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: string input
 * @needle: search string
 * Return: Returns pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == '\0')
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack++;
	}
	return ('\0');
}
