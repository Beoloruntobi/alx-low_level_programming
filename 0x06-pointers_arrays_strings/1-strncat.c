#include "main.h"
#include <string.h>

/**
 * _strncat - Function to concatenate two strings
 * @dest: Destination after concatenation
 * @src: Second string
 * @n: Number of bytes from src to be used
 * Return: Returns the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
