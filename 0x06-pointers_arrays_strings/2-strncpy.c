#include "main.h"
#include <string.h>

/**
 * _strncpy - Function that copies a string
 * @dest: Destination of the copied string
 * @src: Source of the string
 * @n: Number of bytes
 * Return: Returns the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
