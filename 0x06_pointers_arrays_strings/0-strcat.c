#include "main.h"
#include <string.h>

/**
 * _strcat - Function to concatenate 2 strings
 * @dest: First string
 * @src: Second string
 * Return: Returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (dest);
}
