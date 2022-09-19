#include "main.h"
#include <string.h>

/**
 * _strlen - Function to return the length of a string
 * @s: Character pointer
 * Return: Teturns 0 if successful
 */

int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	_putchar(len + '0');

	return (0);
}

