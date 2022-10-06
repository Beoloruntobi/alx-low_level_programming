#include "main.h"
#include <stdlib.h>

/**
 * _memset - function fills memory with a constant byte
 * @s: input pointer
 * @b: characters to fill
 * @n: number of bytes
 * Return: Returns pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Function to allocate memory to an array
 * @nmemb: size of array
 * @size: size of each element
 * Return: Returns pointer with new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}
