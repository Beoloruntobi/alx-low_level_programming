#include "main.h"
#include <string.h>

/**
 * _strcpy - Function to copy string
 * @dest: destination of string copied
 * @src: source of copied string
 * Return: Return copied string
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(*dest, *src));
}
