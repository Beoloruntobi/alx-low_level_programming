#include <stdlib.h>

/**
 * create_array - function to create an array
 * of characters and initialize with a specific one
 * @size: array size
 * @c: character to initialize the array
 * Return: Returns array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
